#ifndef FOUNDATION_H
#define FOUNDATION_H

#include <QObject>
#include <QDragEnterEvent>

#include "cardnode.h"

class Foundation : public QObject
{
    Q_OBJECT
public:
    explicit Foundation(QObject *parent = nullptr);

    CardNode *top{};

    void push(CardNode *ntop);
    bool accept(CardNode *card) const;

public slots:
    bool pop();
    void request_clipboard();
    void request_clipboard(QDragEnterEvent *&event);
    void retrieve_foundation()
    {
        emit unclip(this);
        emit top_changed(top);
    }

signals:
    void send_to_clipboard(CardNode *val, void *source);
    void retrieve_clipboard(Foundation *);
    void unclip(Foundation *);
    void top_changed(Card *);
    void check_clipboard(Foundation *, QDragEnterEvent *&);
    void empty();
};

#endif // FOUNDATION_H
