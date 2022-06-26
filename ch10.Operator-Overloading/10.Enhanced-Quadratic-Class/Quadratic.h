/**
 * Quadratic class definition
 * Member function are defined in Quadratic.cpp
 * 
 * Class to peform arithmetic on and solving basic quadratic equations 
 * 
 * Version: 02 - Provide overloaded + - operators
 * */

// Yuri, May 2022

#ifndef QUADRATIC_H
#define QUADRATIC_H

#include <iostream>
#include <string>

class Quadratic{
    friend std::ostream& operator<<(std::ostream&, const Quadratic&);
public:
    // default constructor
    explicit Quadratic(double =1, double =0, double =0);

    // set functions
    void seta(double);
    void setb(double);
    void setc(double);

    void add(const Quadratic& arg);
    void subtract(const Quadratic& arg);
    std::string toString() const;
    void solve();

    /**
     * Overloaded Operators
     * */
    Quadratic operator+(const Quadratic&) const;
    Quadratic operator-(const Quadratic&) const;


private:
    double a;
    double b;
    double c;
    const char var{'x'};
};

#endif