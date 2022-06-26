#include <iostream>
#include <sstream>
#include "DeckOfCards.h"
using namespace std;

// default constructor
DeckOfCards::DeckOfCards(){
    int counter{0};
    for(int isuit{0}; isuit<4; isuit++){
        for(int iface{0}; iface<13; iface++){
            deck[counter].setSuit(isuit);
            deck[counter].setFace(iface);
            counter++;
        }
    }
}

std::string DeckOfCards::toString() const{
    ostringstream out;
    for(int indx{0}; indx<52; indx++){
        out << deck[0].toString() << "\t";
        if((indx+1)%4 == 0){
            out << endl;
        }
    }return out.str();
}

// void DeckOfCard::shuffle(){

// }

// Card DeckOfCard::dealCard() const{

// }

// bool DeckOfCard::moreCard() const{

// }
