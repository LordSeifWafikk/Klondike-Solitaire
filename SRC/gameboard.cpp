#include "gameboard.h"

#include <random>

#include <iostream>

typedef Card::Rank Rk;
typedef Card::Suit St;


GameBoard::GameBoard(QObject *parent)
    : QObject{parent}
{
    for (size_t i = 0; i < tableaux.size(); i++)
    {
        QObject::connect(&tableaux[i], SIGNAL(send_to_clipboard(CardNode*,void*)), this, SLOT(move_to_clipboard(CardNode*,void*)));
        QObject::connect(&tableaux[i], SIGNAL(retrieve_clipboard(Tableau*)), this, SLOT(clipboard_to_tableau(Tableau*)));
        QObject::connect(&tableaux[i], SIGNAL(check_clipboard(Tableau*,QDragEnterEvent*&)), this, SLOT(set_tableau_DragEnterEvent(Tableau*,QDragEnterEvent*&)));
    }

    for (size_t i = 0; i < foundations.size(); i++)
    {
        QObject::connect(&foundations[i], SIGNAL(send_to_clipboard(CardNode*,void*)), this, SLOT(move_to_clipboard(CardNode*,void*)));
        QObject::connect(&foundations[i], SIGNAL(unclip(Foundation*)), this, SLOT(unclip_foundation(Foundation*)));
        QObject::connect(&foundations[i], SIGNAL(retrieve_clipboard(Foundation*)), this, SLOT(clipboard_to_foundation(Foundation*)));
        QObject::connect(&foundations[i], SIGNAL(check_clipboard(Foundation*,QDragEnterEvent*&)), this, SLOT(set_foundation_DragEnterEvent(Foundation*,QDragEnterEvent*&)));
    }

    for (int rk = Rk::ACE, indx = 0; rk <= Rk::KING; rk++)
    {
        for (int st = St::HEARTS; st <= St::CLUBS; st++, indx++)
        {
            cards[indx].rank = (Rk) rk;
            cards[indx].suit = (St) st;
        }
    }

    std::random_device rd;
    std::shuffle(cards.begin(), cards.end(), std::mt19937(rd()));

    size_t indx = 1;
    tableaux[0].top = &cards[0];
    for (size_t i = 1; i < tableaux.size(); i++)
    {
        for (size_t j = 0; j < i + 1; j++, indx++)
        {
            tableaux[i].push(&cards[indx]);
        }
        tableaux[i].hiddenTop = tableaux[i].top->other;
    }

    stock = &cards[indx];
    for (; indx < cards.size() - 1; indx++)
    {
        cards[indx].other = &cards[indx + 1];
    }

    // test start
    size_t count = 1;
    for (size_t j = 0; j < tableaux.size(); j++)
    {
        for (CardNode *i = tableaux[j].top; i != nullptr; i = i->other)
        {
            std::cout << count << " - " << *(Card *)i << '\n';
            count++;
        }
        std::cout << "\n\n";
    }
    for (CardNode *i = stock; i != nullptr; i = i->other)
    {
        std::cout << count << " - " << *(Card *)i << '\n';
        count++;
    }
    // test end
}

void GameBoard::pop(CardNode *&source, CardNode *&dest)
{
    CardNode *tmp = source;
    source = source->other;
    tmp->other = dest;
    dest = tmp;
}

void GameBoard::check_stock()
{
    if (nullptr == stock)
    {
        while(nullptr != waste)
        {
            pop(waste, stock);
        }
        emit stock_retrieved();
        return;
    }
    pop(stock, waste);
    emit to_waste((Card*) waste);
    if (nullptr == stock)
    {
        emit empty_stock();
    }
}


void GameBoard::pop_waste()
{
    clipSource = waste;
    if (nullptr == waste)
    {
        return;
    }
    clipboard = waste;
    waste = waste->other;
    clipboard->other = nullptr;
    emit to_waste((Card*) waste);
}

bool GameBoard::move_to_clipboard(CardNode *val, void*source)
{
    if (nullptr != clipboard)
    {
        return false;
    }
    clipboard = val;
    clipSource = source;
    return true;
}

void GameBoard::set_tableau_DragEnterEvent(Tableau *tableau, QDragEnterEvent *&event)
{
    if (nullptr == clipboard || clipSource == tableau)
    {
        qDebug() <<clipboard<<"    "<< clipSource;
        event->ignore();
        return;
    }
    CardNode *iter = clipboard;
    for (; nullptr != iter->other; iter = iter->other)
    {
        qDebug() << iter->rank << '\t'<< iter->suit << iter->other;
    }
    qDebug() <<"\n"<< tableau->accept(iter)<< "\n";
    if (tableau->accept(iter))
    {
        clipSource = nullptr;
        event->acceptProposedAction();
    }
    else
    {
        event->ignore();
    }
}


void GameBoard::set_foundation_DragEnterEvent(Foundation *foundation, QDragEnterEvent *&event)
{
    if (nullptr == clipboard || clipSource == foundation)
    {
        qDebug() <<clipboard<<"    "<< clipSource;
        event->ignore();
        return;
    }
    qDebug() <<"\nfoundation " << clipboard->rank <<"  "<< clipboard->suit <<  foundation->accept(clipboard)<< "\n";
    if (foundation->accept(clipboard))
    {
        clipSource = nullptr;
        event->acceptProposedAction();
    }
    else
    {
        event->ignore();
    }
}


void GameBoard::clipboard_to_tableau(Tableau *tableau)
{
    tableau->push_long(clipboard);
    clipboard = nullptr;
}

void GameBoard::clipboard_to_foundation(Foundation *foundation)
{
    foundation->push(clipboard);
    clipboard = nullptr;
}

void GameBoard::retrieve_waste()
{
    emit to_waste((Card *)clipboard);
    clipboard->other = waste;
    waste = clipboard;
    clipboard = nullptr;
}

void GameBoard::unclip_foundation(Foundation *foudtion)
{
    emit to_foundation((Card *)clipboard);
    foudtion->push(clipboard);
    clipboard = nullptr;
}
