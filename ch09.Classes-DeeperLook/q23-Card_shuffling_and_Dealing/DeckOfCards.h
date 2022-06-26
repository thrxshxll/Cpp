// DeckOfCards class definition.
// Member functions are defined in DeckOfCards.cpp
#include <array> 
#include <string>
#include "Card.h"

#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

class DeckOfCards{
public:
    // default constructor
    DeckOfCards();

    // void shuffle();
    // Card dealCard() const;
    // bool moreCard() const;

    std::string toString() const;
    
private:
    std::array<Card, 52> deck;
    int currentCard{0};

};
#endif