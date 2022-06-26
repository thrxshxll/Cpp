/**
 * Class to peform arithmetic on and solving basic quadratic equations 
 * */

// Quadratic class definition
// Member function are defined in Quadratic.cpp
#include <string>

#ifndef QUADRatic_H
#define QUADRatic_H

class Quadratic{
public:
    explicit Quadratic(double =1, double =0, double =0); // default constructor

    // set functions
    void seta(double);
    void setb(double);
    void setc(double);

    void add(const Quadratic& arg);
    void subtract(const Quadratic& arg);
    std::string toString() const;
    void solve();

private:
    double a{1};
    double b{0};
    double c{0};
    const char var{'x'};
};

#endif