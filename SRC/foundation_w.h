#ifndef FOUNDATION_W_H
#define FOUNDATION_W_H

#include <QWidget>
#include <QLabel>

#include "card.h"


class Foundation_W : public QLabel
{
    Q_OBJECT
public:
    explicit Foundation_W(QWidget *parent = nullptr);

public slots:
    void draw_card(Card *card);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;

signals:
    void draged_top();
    void drag_fail();
    void unclip();
    void check_clipboard(QDragEnterEvent *&event);
};

#endif // FOUNDATION_W_H
