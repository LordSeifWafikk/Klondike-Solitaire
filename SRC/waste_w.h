#ifndef WASTE_W_H
#define WASTE_W_H

#include <QWidget>

#include <QLabel>

#include "card.h"

class Waste_W : public QLabel
{
    Q_OBJECT
public:
    explicit Waste_W(QWidget *parent = nullptr);

public slots:
    void draw_card(Card *card);

protected:
    void mousePressEvent(QMouseEvent *event) override;

signals:
    void pop();
    void top();
};

#endif // WASTE_W_H
