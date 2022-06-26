/**
 * Rectangle class to calculate rectangle's perimeter and area.
 * Cartesian coordinates Are used to form rectangle.
 * */
// Rectangle class definition.
// Member functions are defined in Rectangle.cpp

#include "Coordinate.h" // Composition

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
public:
    // constructor
    Rectangle(const Coordinate&, const Coordinate&, const Coordinate&, const Coordinate&);

    double perimeter();
    double area();

    // set functions
    void setLength(double);
    void setWidth(double);

    void sethLeft(const Coordinate&);
    void sethRight(const Coordinate&);
    void setlLeft(const Coordinate&);
    void setlRight(const Coordinate&);

    // get functions
    double getLength() const;
    double getWidth() const;

private:
    Coordinate hLeft;  // high left
    Coordinate hRight; // high right
    Coordinate lLeft;  // low left 
    Coordinate lRight; // low right

    
// utility function
    // verify wether is, in fact, a rectangle
    void setRectangle(const Coordinate&, const Coordinate&, const Coordinate&, const Coordinate&);
};

#endif