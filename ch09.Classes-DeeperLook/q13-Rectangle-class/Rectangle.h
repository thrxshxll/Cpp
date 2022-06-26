/**
 * Rectangle class to calculate rectangle's perimeter, area and draw a rectangle inside
 * a 25-by-25 box.
 * Four Cartesian coordinates class Are used to form the rectangle.
 * */

// Rectangle class definition.
// Member functions are defined in Rectangle.cpp

#include <array>
#include "Coordinate.h" // Class Composition

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
public:
    // constructor
    Rectangle(const Coordinate&, const Coordinate&, const Coordinate&, const Coordinate&);

    double perimeter();
    double area();
    void draw();

    // set functions
    void setLength(double);
    void setWidth(double);

    void setFillCharacter(char);
    void setPerimeterCharacter(char);

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
    char borderRectangle;
    std::array<std::array<char, 25>,25> box{};
    
    // utility function.
    // verify wether, in fact, the coordinates form a rectangle
    void setRectangle(const Coordinate&, const Coordinate&, const Coordinate&, const Coordinate&);
};

#endif