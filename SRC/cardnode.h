#ifndef CARDNODE_H
#define CARDNODE_H

#include <QObject>

#include "card.h"


class CardNode : /*public QObject, */public Card
{
    // Q_OBJECT
public:
    // explicit CardNode(QObject *parent = nullptr);

    // CardNode(const CardNode& val, QObject *parent = nullptr);

    // void operator = (const CardNode& val);

    CardNode *other{};
// signals:
};

#endif // CARDNODE_H
