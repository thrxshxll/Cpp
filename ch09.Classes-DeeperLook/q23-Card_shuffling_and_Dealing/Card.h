// Card class definition
// Member functions are defined in Card.cpp
#include <array>
#include <string>

#ifndef CARD_H
#define CARD_H

enum class Face{ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
enum class Suit{CLUB, DIAMOND, HEART, SPADE};

class Card{
    friend class DeckOfCards;
public:
    // default constructor
    Card();

    // constructor
    Card(const Face&, const Suit&);

    void setFace(int);
    void setSuit(int);

    std::string getFace() const;
    std::string getSuit() const;

    std::string toString() const;

private:
    Face face;
    Suit suit;

    // static data members; classwide
    static std::array<std::string, 13> strFace;
    static std::array<std::string,  4> strSuit;
};

#endif