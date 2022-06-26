// HugeInteger class Member-function definitions.
#include <sstream>
#include <stdexcept>
#include <cmath>
#include "HugeInteger.h"
using namespace std;

// constructor
HugeInteger::HugeInteger(const string& arg){
    stringToArray(arg);
}


// member functions

void HugeInteger::input(const string& arg){
    stringToArray(arg);
}

string HugeInteger::output() const{
    ostringstream out;

    if(integer.at(0)==-1){out << "-";}

    for(size_t indx{initInt()}; indx < Dig; ++indx){
        out << integer.at(indx);
    }return out.str();
}

void HugeInteger::add(const HugeInteger& arg){
    size_t init{biggestNum(arg)};

    for(int indx{Dig-1}; indx >= init; --indx){
        int sum{ this->integer.at(indx) + arg.integer.at(indx) };

        if(sum >= 10){
            this->integer.at(indx-1) += sum / 10;
            this->integer.at(indx) = sum % 10;
        }else
            this->integer.at(indx) = sum;
    }
}

void HugeInteger::subtract(const HugeInteger& arg){
    size_t init{biggestNum(arg)};

    if(this->integer < arg.integer){
        this->integer.at(0)=-1;
    }
    for(size_t indx{Dig-1}; indx >= init; --indx){
        this->integer.at(indx) = abs(this->integer.at(indx) - arg.integer.at(indx));
    }
}

void HugeInteger::stringToArray(const std::string& arg){
    if(!arg.empty() && arg.size() < Dig){

        int indx = arg.size()-1; //  list initialization
        for(int count{Dig-1}; indx >= 0; --count, --indx){
            integer.at(count) = arg.at(indx)-48; // ASCII digit to number digit
        }
    }else
        throw invalid_argument("Invalid integer!");
}


// predicate functions

bool HugeInteger::isEqualTo(const HugeInteger& arg) const{
    if(this->integer == arg.integer){
        return true;
    }return false;
}

bool HugeInteger::isNotEqualTo(const HugeInteger& arg) const{
    if(this->integer != arg.integer){
        return true;
    }return false;
}

bool HugeInteger::isGreaterThan(const HugeInteger& arg) const{
    if(this->integer > arg.integer){
        return true;
    }return false;
}

bool HugeInteger::isLessThan(const HugeInteger& arg) const{
    if(this->integer < arg.integer){
        return true;
    }return false;
}

bool HugeInteger::isGreaterThanOrEqualTo(const HugeInteger& arg) const{
    if(this->integer >= arg.integer){
        return true;
    }return false;
}

bool HugeInteger::isLessThanOrEqualTo(const HugeInteger& arg) const{
    if(this->integer <= arg.integer){
        return true;
    }return false;
}


// utility functions

size_t HugeInteger::biggestNum(const HugeInteger& arg){
    size_t init1{this->initInt()};
    size_t init2{arg.initInt()};
    return (init1<init2) ? init1 : init2;
}

size_t HugeInteger::initInt() const{
    size_t indx{0};
    while(integer.at(indx) <= 0 && indx < Dig-1){ // while less than or equal zero and less 40
        ++indx;
    }return indx;
}