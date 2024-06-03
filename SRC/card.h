#ifndef CARD_H
#define CARD_H

#include <ostream>


class Card
{
public:
    enum Rank
    {
        ACE = 1,
        TWO, THREE, FOUR, FIVE, SIX,
        SEVEN, EIGHT, NINE, TEN,
        JACK,
        QUEEN,
        KING,
    } rank;

    enum Suit
    {
        HEARTS = 0,
        SPADES,
        DIAMONDS,
        CLUBS,
    } suit;


    Card() = default;
    Card(Rank rk, Suit st)
        :rank(rk), suit(st)
    {}
    friend std::ostream& operator << (std::ostream& out, const Card& card);
};

#endif // CARD_H
