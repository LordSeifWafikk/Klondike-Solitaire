#include "foundation.h"

Foundation::Foundation(QObject *parent)
    : QObject{parent}
{}


void Foundation::push(CardNode *ntop)
{
    if (nullptr == ntop)
    {
        return;
    }
    ntop->other = top;
    top = ntop;
}

bool Foundation::pop()
{
    if (nullptr == top)
    {
        return false;
    }
    CardNode *old_top = top;
    qDebug() << "Foundation::pop(): "<< top << "   " << top->other;
    top = top->other;

    old_top->other = nullptr;
    emit send_to_clipboard(old_top, this);
    if (nullptr == top)
    {
        emit empty();
    }
    else
    {
        emit top_changed(top);
    }
    return true;
}

bool Foundation::accept(CardNode *card) const
{
    if (nullptr == top)
    {
        if (Card::ACE == card->rank)
            return true;
        else
            return false;
    }
    return nullptr == card->other && (card->rank - 1 == top->rank && card->suit == top->suit);
}

void Foundation::request_clipboard()
{
    emit retrieve_clipboard(this);
}

void Foundation::request_clipboard(QDragEnterEvent *&event)
{
    emit check_clipboard(this, event);
}

