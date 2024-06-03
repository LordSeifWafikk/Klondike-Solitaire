#include "tableau_w.h"

#include <QMouseEvent>
#include <QMimeData>
#include <QDrag>


Tableau_W::Tableau_W(QWidget *parent)
    : QFrame{parent}
{
    setAcceptDrops(true);
}

inline void Tableau_W::push(CardLabelNode *&top, CardLabelNode *ntop)
{
    ntop->prev = top;
    top = ntop;
}

inline CardLabelNode * Tableau_W::pop(CardLabelNode *&top)
{
    if(nullptr == top)
    {
        return nullptr;
    }
    CardLabelNode *tmp = top;
    top = top->prev;
    tmp->prev = nullptr;
    return tmp;
}

inline void Tableau_W::append(DraggableCardLabelNode *&tail, DraggableCardLabelNode *ntail)
{
    if (nullptr == tail)
    {
        tail = ntail;
        tail->next = tail;
    }
    else
    {
        ntail->next = tail->next;
        tail->next = ntail;
        tail = ntail;
    }
}

void Tableau_W::cut(DraggableCardLabelNode *deletable)
{
    if (nullptr == qTail)
    {
        return;
    }

    DraggableCardLabelNode *head = qTail->next;
    DraggableCardLabelNode *iterator;

    if(deletable == head)
    {
        iterator = deletable->next;
        while (iterator != head)
        {
            deletable = iterator;
            iterator = iterator->next;
            delete deletable;
        }
        delete head;
        qTail = nullptr;
    }
    else
    {
        iterator = head;
        while (iterator->next != deletable)
        {
            iterator = iterator->next;
        }
        qTail = iterator;
        qTail->next = head;

        iterator = deletable;
        while (iterator != head)
        {
            deletable = iterator;
            iterator = iterator->next;
            delete deletable;
        }
    }
}


void Tableau_W::mousePressEvent(QMouseEvent *event)
{
    DraggableCardLabelNode *dragHead = dynamic_cast<DraggableCardLabelNode *>(childAt(event->position().toPoint()));
    if (nullptr == dragHead)
    {
        return;
    }

    QByteArray itemData;
    QDataStream dataStream(&itemData, QIODevice::WriteOnly);
    QMimeData *mimeData;
    QDrag *drag;

    DraggableCardLabelNode *iterator = dragHead;
    size_t index = 0;
    do
    {
        dataStream << iterator->pixmap();
        index++;
        iterator->hide();
        iterator = iterator->next;
    }while (iterator != qTail->next);
    index--;

    emit clip(index);

    mimeData = new QMimeData;
    mimeData->setData("application/x-dnditemdata", itemData);

    drag = new QDrag(this);
    drag->setMimeData(mimeData);
    drag->setPixmap(dragHead->pixmap());
    drag->setHotSpot(event->position().toPoint() - dragHead->pos());

    Qt::DropAction dropResult = drag->exec(Qt::MoveAction);
    if (Qt::MoveAction == dropResult)
    {
        bool drag_is_oldhead = dragHead == qTail->next;
        cut(dragHead);
        if (drag_is_oldhead)
        {
            emit show_top();
        }
    }
    else
    {
        emit unclip();
        do
        {
            iterator->show();
            iterator = iterator->next;
        }while (iterator != qTail->next);
    }
}

void Tableau_W::dragEnterEvent(QDragEnterEvent *event)
{
    if (false == event->mimeData()->hasFormat("application/x-dnditemdata"))
    {
        event->ignore();
        return;
    }
    emit check_clipboard(event);
}


void Tableau_W::dropEvent(QDropEvent *event)
{
    emit unclip();
    QPoint tmPos;
    if (nullptr == qTail)
    {
        tmPos = QPoint(0, -card_offset);
    }
    else
    {
        tmPos = qTail->pos();
    }

    QByteArray itemData = event->mimeData()->data("application/x-dnditemdata");
    QDataStream dataStream(&itemData, QIODevice::ReadOnly);
    QPixmap cardImg;

    while (!dataStream.atEnd())
    {
        dataStream >> cardImg;

        append(qTail, new DraggableCardLabelNode(this));
        qTail->move(tmPos.x(), card_offset + tmPos.y());
        qTail->setPixmap(cardImg);
        qTail->show();
        tmPos = qTail->pos();
    }
    event->acceptProposedAction();
}

bool Tableau_W::flip_top(Card card)
{
    CardLabelNode *top = pop(stacked);
    if (nullptr == top)
    {
        return false;
    }

    QPoint tmPos = top->pos();
    delete top;
    append(qTail, new DraggableCardLabelNode(this));
    qTail->setFixedSize(width(), card_height);
    QPixmap img = QPixmap("../Solitaire/PNG-cards/"
                  + QString::number(card.rank) + '-'
                  + QString::number(card.suit) + ".png"
                  );
    img = img.scaled(qTail->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    qTail->setPixmap(img);
    qTail->setAlignment(Qt::AlignCenter);
    qTail->setGeometry(tmPos.x(), tmPos.y(), card_width, card_height);
    qTail->show();
    return true;
}

bool Tableau_W::init(const Tableau *base)
{
    if (nullptr == base)
    {
        return false;
    }

    QPixmap img("../Solitaire/PNG-cards/0-0.png");
    img = img.scaled(width(), card_height, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    int cardY = 0;
    for (CardNode *iterable = base->hiddenTop; nullptr != iterable;
         iterable = iterable->other, cardY += card_offset
         )
    {
        push(stacked, new CardLabelNode(this));
        stacked->setFixedSize(width(), card_height);
        stacked->setPixmap(img);
        stacked->setAlignment(Qt::AlignCenter);
        stacked->setGeometry(0, cardY, card_width, card_height);
    }

    append(qTail, new DraggableCardLabelNode(this));
    qTail->setFixedSize(width(), card_height);
    img = QPixmap("../Solitaire/PNG-cards/"
                  + QString::number(base->top->rank) + '-'
                  + QString::number(base->top->suit) + ".png"
                  );
    img = img.scaled(qTail->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    qTail->setPixmap(img);
    qTail->setAlignment(Qt::AlignCenter);
    qTail->setGeometry(0, cardY, card_width, card_height);
    return true;
}
