#ifndef TABLEAU_H
#define TABLEAU_H

#include <QObject>
#include <QDragEnterEvent>

#include "cardnode.h"


class Tableau : public QObject
{
    Q_OBJECT
public:
    explicit Tableau(QObject *parent = nullptr);

    CardNode *hiddenTop{};
    CardNode *top{};

    void push(CardNode *ntop);
    CardNode * operator [](size_t indx);
    void push_long(CardNode *ntop);
    bool accept(CardNode *card) const
    {
        if (top == nullptr && hiddenTop == nullptr && card->rank == Card::KING)
        {
            return true;
        }
        if (nullptr == top)
            return false;
        return card->suit % 2 != top->suit % 2 && card->rank + 1 == top->rank;
    }

public slots:
    bool show();
    bool remove(size_t index);
    void request_clipboard();
    void request_clipboard(QDragEnterEvent *&);

signals:
    void flip(Card card);
    void send_to_clipboard(CardNode *val, void *source);
    void retrieve_clipboard(Tableau *);
    void check_clipboard(Tableau *, QDragEnterEvent *&);
};

#endif // TABLEAU_H
