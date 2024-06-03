#include "foundation_w.h"

#include <QDropEvent>
#include <QMimeData>
#include <QDrag>


Foundation_W::Foundation_W(QWidget *parent)
    : QLabel{parent}
{
    setFrameShape(QFrame::Box);
    setAcceptDrops(true);
}


void Foundation_W::draw_card(Card *card)
{
    if (nullptr == card)
    {
        clear();
        return;
    }
    QPixmap img = QPixmap("../Solitaire/PNG-cards/"
                          + QString::number(card->rank) + '-'
                          + QString::number(card->suit) + ".png"
                          );
    img = img.scaled(size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    setPixmap(img);
}


void Foundation_W::mousePressEvent(QMouseEvent *event)
{
    if (pixmap().isNull())
    {
        return;
    }
    QPixmap top_pixmap = this->pixmap();
    QByteArray itemData;
    QDataStream dataStream(&itemData, QIODevice::WriteOnly);
    dataStream << top_pixmap;

    QMimeData *mimeData = new QMimeData;
    mimeData->setData("application/x-dnditemdata", itemData);

    QDrag *drag = new QDrag(new QLabel);
    drag->setMimeData(mimeData);
    drag->setPixmap(top_pixmap);
    drag->setHotSpot(event->position().toPoint());

    emit draged_top();
    if (Qt::MoveAction != drag->exec(Qt::MoveAction))
    {
        emit drag_fail();
    }
}

void Foundation_W::dragEnterEvent(QDragEnterEvent *event)
{
    if (false == event->mimeData()->hasFormat("application/x-dnditemdata"))
    {
        event->ignore();
        return;
    }
    emit check_clipboard(event);
}

void Foundation_W::dropEvent(QDropEvent *event)
{
    emit unclip();
    QByteArray itemData = event->mimeData()->data("application/x-dnditemdata");
    QDataStream dataStream(&itemData, QIODevice::ReadOnly);

    QPixmap pixmap;
    dataStream >> pixmap;
    if (false == dataStream.atEnd())
    {
        return;
    }
    setPixmap(pixmap);
    event->acceptProposedAction();
}


