#include "tableau.h"

Tableau::Tableau(QObject *parent)
    : QObject{parent}
{}


bool Tableau::show()
{
    if (nullptr == hiddenTop)
    {
        return false;
    }

    CardNode *tmp = hiddenTop;
    hiddenTop = hiddenTop->other;
    emit flip(*(Card *)(tmp));
    return true;
}

void Tableau::push(CardNode *ntop)
{
    if (nullptr == ntop)
    {
        return;
    }
    ntop->other = top;
    top = ntop;
}

void Tableau::push_long(CardNode *ntop)
{
    for(CardNode *iter = ntop; nullptr != iter; iter = iter->other)
    {
        if (nullptr == iter->other)
        {
            iter->other = top;
            top = ntop;
            return;
        }
    }
}

CardNode * Tableau::operator [](size_t indx)
{
    for (CardNode *iterator = top;
         iterator != hiddenTop;
         indx--, iterator = iterator->other)
    {
        if (0 == indx)
        {
            return iterator;
        }
    }
    return nullptr;
}

bool Tableau::remove(size_t index)
{
    CardNode *end = (*this)[index];
    if (nullptr == end)
    {
        return false;
    }
    CardNode *old_top = top;

    while (end != top)
    {
        top = top->other;
    }
    top = top->other;

    end->other = nullptr;
    emit send_to_clipboard(old_top, this);
    return true;
}

void Tableau::request_clipboard()
{
    emit retrieve_clipboard(this);
}

void Tableau::request_clipboard(QDragEnterEvent *&event)
{
    emit check_clipboard(this, event);
}
