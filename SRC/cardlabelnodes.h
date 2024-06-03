#ifndef CARDLABELNODES_H
#define CARDLABELNODES_H

#include <QLabel>


struct CardLabelNode : public QLabel
{
    explicit CardLabelNode(QWidget *parent = nullptr)
        : QLabel{parent}
    {}
    CardLabelNode *prev{};
};

struct DraggableCardLabelNode : public QLabel
{
    explicit DraggableCardLabelNode(QWidget *parent = nullptr)
        : QLabel{parent}
    {}
    DraggableCardLabelNode *next{};
};

#endif // CARDLABELNODES_H
