#include "waste_w.h"

#include <QMouseEvent>
#include <QMimeData>
#include <QDrag>


Waste_W::Waste_W(QWidget *parent)
    : QLabel{parent}
{
    setFrameShape(QFrame::Box);
}

void Waste_W::draw_card(Card *card)
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


void Waste_W::mousePressEvent(QMouseEvent *event)
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

    emit pop();
    if (Qt::MoveAction != drag->exec(Qt::MoveAction))
    {
        emit top();
    }
}
