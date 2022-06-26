// Polynomial class definition.
// Member functions are defined in Polynomial.cpp

#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <string>
#include <initializer_list>

class Polynomial{
    // friend void sortTerms(Polynomial& arg);
public:

    Polynomial();
    explicit Polynomial(const std::initializer_list<int>&);
    ~Polynomial();

    // set functions
    void setTerm(size_t, int, int);
    void setCoefficient(size_t, int);
    void setExpoent(size_t, int);

    // get functions
    // Polynomial getTerm(size_t term);
    std::string getTerm(size_t term) const;
    int getCoefficient(size_t term) const;
    int getExpoent(size_t term) const;
    int getSize() const;

    std::string toString() const;

    /**
     * Overloaded operators
     * */
    const Polynomial& operator=(const Polynomial&);
    Polynomial operator+(const Polynomial&);
    Polynomial operator-(const Polynomial&);
    Polynomial operator*(const Polynomial&);
    Polynomial operator+=(const Polynomial&);
    Polynomial operator*=(const Polynomial&);


private:
    size_t size;
    int* ptr;

    // sort terms at polynomial constructor
    void sortTerms();

    // assign which is greater and smaller 
    void WhatIsGreaterSmaller(const Polynomial&, Polynomial&, Polynomial&);
};

#endif