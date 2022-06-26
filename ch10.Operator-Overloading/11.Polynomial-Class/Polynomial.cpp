// Member functions definitions.

#include <iostream>
#include <sstream>
#include "Polynomial.h"
using namespace std;

Polynomial::Polynomial() : Polynomial{0,0} { }

Polynomial::Polynomial(const initializer_list<int>& initList)
:   size{(initList.size() > 0) ? initList.size() :
        throw invalid_argument{"Must have at least one term nx^m"}},
    ptr{new int[size]{}} {

    // *temp is used to store coefficient and expoent to pass them separated in
    // setTerm()
    int* temp{new int[size]{}};
    size_t indx{0};
    for(int item : initList){
        temp[indx]=item;
        ++indx;
    }

    // as coefficient and expoent are stored in an array, amount of term of
    // polynomial is (size/2)
    size/=2;

    for(indx=0; indx<size; ++indx){
        setTerm(indx, temp[indx*2], temp[indx*2+1]);
    }

    // sort terms regard its expoent
    this->sortTerms();

    delete[] temp;
    temp=nullptr;
}


Polynomial::~Polynomial(){
    delete[] ptr;
    ptr=nullptr;
}


void Polynomial::setTerm(size_t term, int coefficient, int expoent){
    setCoefficient(term, coefficient);
    setExpoent(term, expoent);
}


void Polynomial::setCoefficient(size_t term, int coefficient){
    ptr[term*2]=coefficient;
}


void Polynomial::setExpoent(size_t term, int expoent){
    ptr[term*2+1]=expoent;
}


int Polynomial::getCoefficient(size_t term) const{
    return ptr[term*2];
}


int Polynomial::getExpoent(size_t term) const{
    return ptr[term*2+1];
}


int Polynomial::getSize() const{
    return size;
}


std::string Polynomial::getTerm(size_t term) const{
    ostringstream output;

    output << showpos; // to show sign numbers in expoent

    output << " " << getCoefficient(term);

    if(getExpoent(term) < 0 || getExpoent(term) > 1){
        output << "x^" << getExpoent(term);
    }else if(getExpoent(term) == 1){
        output << "x";
    }return output.str();
}


std::string Polynomial::toString() const{
    ostringstream output;

    output << showpos; // to show sign numbers in coefficient

    for(size_t indx{0}; indx<size; ++indx){
        output << getTerm(indx);
    }return output.str();
}


/**
 * Overloaded operators
 * */
const Polynomial& Polynomial::operator=(const Polynomial& arg){
    // avoid self-assignment
    if(this != &arg){

        if(size != arg.size){
            delete[] ptr;
            size=arg.size;
            ptr = new int[size*2];
        }

        for(size_t i{0}; i<size*2; i++){
            ptr[i] = arg.ptr[i];
        }
    }return *this; // enbles cascaded assignment a = b = c
}


Polynomial Polynomial::operator+(const Polynomial& arg){
    Polynomial greater, smaller;

    WhatIsGreaterSmaller(arg, greater, smaller);

    for(size_t a{0}; a<smaller.size; a++){

        for(size_t b{0}; b<greater.size; b++){

            if(greater.ptr[b*2+1] == smaller.ptr[a*2+1]){
                greater.ptr[b*2] += smaller.ptr[a*2];
            }
        }
    }return greater;
}

Polynomial Polynomial::operator-(const Polynomial& arg){
    Polynomial greater, smaller;

    WhatIsGreaterSmaller(arg, greater, smaller);

    for(size_t a{0}; a<smaller.size; a++){

        for(size_t b{0}; b<greater.size; b++){

            if(greater.ptr[b*2+1] == smaller.ptr[a*2+1]){
                greater.ptr[b*2] -= smaller.ptr[a*2];
            }
        }
    }return greater;
}

Polynomial Polynomial::operator*(const Polynomial& arg){
    Polynomial greater, smaller;

    WhatIsGreaterSmaller(arg, greater, smaller);

    for(size_t a{0}; a<smaller.size; a++){

        for(size_t b{0}; b<greater.size; b++){

            if(greater.ptr[b*2+1] == smaller.ptr[a*2+1]){
                greater.ptr[b*2] *= smaller.ptr[a*2];
            }
        }
    }return greater;
}

// Polynomial Polynomial::operator+=(const Polynomial& arg){

// }

// Polynomial Polynomial::operator*=(const Polynomial& arg){

// }


void Polynomial::sortTerms(){
    // insertion sort algorithm
    // key[0] coefficient
    // key[1] expoent
    // arg.ptr[x*2 -1] coefficient
    // arg.ptr[x*2] expoent

    for(size_t i{3}; i<this->size*2; i+=2){

        int key[2]{this->ptr[i-1], this->ptr[i]};
        int j=i-2;
        while(j>=1 && this->ptr[j]<key[1]){
            this->ptr[j+2 -1]=this->ptr[j -1]; // set coefficient
            this->ptr[j+2]=this->ptr[j]; // set expoent
            j = j-2;
        }
        this->ptr[j+2 -1]=key[0];
        this->ptr[j+2]=key[1];
    }
}


void Polynomial::WhatIsGreaterSmaller(const Polynomial& arg, Polynomial& greater, Polynomial& smaller){
    if(this->size >= arg.size){
        greater = *this;
        smaller = arg;
    }else{
        greater = arg;
        smaller = *this;
    }
}