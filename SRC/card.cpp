#include "card.h"


std::ostream& operator << (std::ostream& out, const Card& card)
{
    switch(card.rank)
    {
    case Card::ACE:
        out << "ACE";
        break;

    case Card::TEN:
        out << "10";
        break;
    case Card::JACK:
        out << "JACK";
        break;
    case Card::QUEEN:
        out << "QUEEN";
        break;
    case Card::KING:
        out << "KING";
        break;
    default:
        out << (char) (card.rank + '0');
        break;
    }

    out << " of ";

    switch (card.suit)
    {
    case Card::HEARTS:
        out << "HEARTS";
        break;
    case Card::SPADES:
        out << "Spades";
        break;
    case Card::CLUBS:
        out << "Clubs";
        break;
    case Card::DIAMONDS:
        out << "DIAMONDS";
        break;
    }

    return out;

}
