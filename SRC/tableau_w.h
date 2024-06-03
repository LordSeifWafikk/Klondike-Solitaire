#ifndef TABLEAU_W_H
#define TABLEAU_W_H

#include <QWidget>

#include <QFrame>
#include <QLabel>

#include "tableau.h"
#include "cardlabelnodes.h"

class Tableau_W : public QFrame
{
    Q_OBJECT
public:
    explicit Tableau_W(QWidget *parent = nullptr);
    bool init(const Tableau *base);

public slots:
    bool flip_top(Card card);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;

signals:
    void show_top();
    void clip(size_t index);
    void unclip();
    void check_clipboard(QDragEnterEvent *&event);

private:
    CardLabelNode *stacked{};
    DraggableCardLabelNode *qTail{};

    static constexpr int card_offset = 35;
    static constexpr size_t card_width = 166, card_height = 242;

    void cut(DraggableCardLabelNode *startPos);

    static inline void push(CardLabelNode *&top, CardLabelNode *ntop);
    static inline void append(DraggableCardLabelNode *&tail, DraggableCardLabelNode *ntail);
    static inline CardLabelNode * pop(CardLabelNode *&top);
};

#endif // TABLEAU_W_H
