/**
 * Class for peforming arithmetic fractions
 * */

// Rational class definition
// Member functions are defined in Rational.cpp
#include <string>

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational{
public:
    explicit Rational(int =0, int =1);

    void add(const Rational&);
    void subtract(const Rational&);
    void multiply(const Rational&);
    void divide(const Rational&);
    std::string toRationalString() const;
    double toDouble() const;

private:
    int numerator{0};
    int denominator{1};

    void reducedForm(int, int);
};

#endif