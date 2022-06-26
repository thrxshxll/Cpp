// Card class member-function definitions
#include "Card.h"
#include <sstream>
#include <stdexcept>
using namespace std;

array<string, 13> Card::strFace{"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
array<string,  4> Card::strSuit{"Clubs","Diamonds","Hearts","Spades"};

// default constructor
Card::Card() : Card{Face::ACE, Suit::CLUB} {};

// constructor
Card::Card(const Face& argFace, const Suit& argSuit)
:   face{argFace},
    suit{argSuit}
{}

void Card::setFace(int arg){
    switch(arg){
        case 0 ... 12:
            face=static_cast<Face>(arg-1);
            break;
        default:
            throw invalid_argument("Face out of range");
    }
}

void Card::setSuit(int arg){
    switch(arg){
        case 0 ... 4:
            suit=static_cast<Suit>(arg-1);
            break;
        default:
            throw invalid_argument("Suit out of range");
    }
}

std::string Card::getFace() const{
    return Card::strFace[static_cast<int>(face)];
}

std::string Card::getSuit() const{
    return Card::strSuit[static_cast<int>(suit)];
}

string Card::toString() const{
    return strFace.at(static_cast<unsigned int>(this->face)) + " of " + strSuit.at(static_cast<unsigned int>(this->suit));
}
