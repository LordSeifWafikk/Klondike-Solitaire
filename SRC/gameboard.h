#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QObject>

#include "cardnode.h"
#include "tableau.h"
#include "foundation.h"

class GameBoard : public QObject
{
    Q_OBJECT
public:
    explicit GameBoard(QObject *parent = nullptr);
    
    std::array<Tableau, 7> tableaux;
    std::array<Foundation, 4> foundations;
    std::array<CardNode, 52> cards;
    CardNode *stock{};
    CardNode *waste{};
    CardNode *clipboard{};
    void *clipSource{};

    void pop(CardNode *&source, CardNode *&dest);

public slots:
    void check_stock();
    void pop_waste();
    void retrieve_waste();
    bool move_to_clipboard(CardNode *, void *source);
    void set_tableau_DragEnterEvent(Tableau *tableau, QDragEnterEvent *&event);
    void clipboard_to_tableau(Tableau *);
    void set_foundation_DragEnterEvent(Foundation *foundation, QDragEnterEvent *&event);
    void clipboard_to_foundation(Foundation *foundation);
    void unclip_foundation(Foundation*);

signals:
    void to_waste(Card *);
    void to_foundation(Card *);
    void stock_retrieved();
    void empty_stock();
};

#endif // GAMEBOARD_H
