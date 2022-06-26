/**
 * Coordinate class used to form four Cartesian coordinates in Rectangle.h
 * Class is used as Composition.
 * */

// Coordinate class definition.
// Member functions are defined in Coordinate.cpp

#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate{
public:
    // constructor
    Coordinate(const double =1, const double =1);

    // set functions
    void setX(double);
    void setY(double);

    // get functions
    double getX() const;
    double getY() const;

private:
    double x{1};
    double y{1};
};

#endif