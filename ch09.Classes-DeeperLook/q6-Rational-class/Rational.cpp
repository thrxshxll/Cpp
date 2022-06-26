// Rational member-functions definitions
#include <string>
#include <sstream>
#include "Rational.h"
using namespace std;

Rational::Rational(int n, int d){
    reducedForm(n, ((d!=0) ? d : 1) );
}

void Rational::add(const Rational& arg){
    int den{denominator*arg.denominator};
    int num{ (den/denominator)*numerator + (den/arg.denominator)*arg.numerator };
    reducedForm(num, den);
}

void Rational::subtract(const Rational& arg){
    int den{denominator*arg.denominator};
    int num{ (den/denominator)*numerator - (den/arg.denominator)*arg.numerator };
    reducedForm(num, den);
}

void Rational::multiply(const Rational& arg){
    numerator *= arg.numerator;
    denominator *= arg.denominator;
    reducedForm(numerator, denominator);
}

void Rational::divide(const Rational& arg){
    numerator *= arg.denominator;
    denominator *= arg.numerator;
    reducedForm(numerator, denominator);
}

string Rational::toRationalString() const{
    ostringstream output;
    output << numerator << "/" << denominator;
    return output.str();
}

double Rational::toDouble() const{
    return static_cast<double>(numerator)/denominator;
}

void Rational::reducedForm(int n, int d){
    int hold_n{n}, hold_d{d};
    // found greatest commom divisor (n)
    while(d != 0){
        int r{n%d};
        n = d;
        d = r;
    }
    // reduce fraction
    numerator = hold_n / n;
    denominator = hold_d / n;
}
