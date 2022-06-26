// Rectangle class member-function definitions.
#include <stdexcept>
#include "Rectangle.h"
using namespace std;

// constructor
Rectangle::Rectangle(const Coordinate& hLeft, const Coordinate& hRight, const Coordinate& lLeft, const Coordinate& lRight){
    setRectangle(hLeft, hRight, lLeft, lRight);
}

double Rectangle::perimeter(){
    return 2*this->getLength() + 2*this->getWidth();
}
double Rectangle::area(){
    return this->getLength() * this->getWidth();
}


// set functions

void Rectangle::setRectangle(const Coordinate& hLeft, const Coordinate& hRight, const Coordinate& lLeft, const Coordinate& lRight){
    double hLength{hRight.getX() - hLeft.getX()}, lLength{lRight.getX() - lLeft.getX()};
    double lWidth{hLeft.getY() - lLeft.getY()}, rWidth{hRight.getY() - lRight.getY()};

    if(hLength == lLength && rWidth == lWidth){
        if(hLength > lWidth){
            sethLeft(hLeft);
            sethRight(hRight);
            setlLeft(lLeft);
            setlRight(lRight);
        }
    }else
        throw invalid_argument("it isn't quadrilateral");
}

void Rectangle::setLength(double newLength){
    if(0.0 < newLength && newLength != this->getLength()){
        if(newLength != this->getWidth()){
            double offSet{newLength - this->getLength()};
            hRight.setX( hRight.getX() + offSet );
            lRight.setX( lRight.getX() + offSet );
        }else
            throw invalid_argument("Length is equal Width!"); // form square
    }
}
void Rectangle::setWidth(double newWidth){
    if(0.0 < newWidth && newWidth != this->getWidth()){
        if(newWidth != this->getLength()){
            double offSet{newWidth - this->getWidth()};
            hLeft.setY(hRight.getY() + offSet);
            hRight.setY(lRight.getY() + offSet);
        }else
            throw invalid_argument("Width is equal Length!"); // form square
    }
}

void Rectangle::sethLeft(const Coordinate& hLeft){
    this->hLeft=hLeft;
}

void Rectangle::sethRight(const Coordinate& hRight){
    this->hRight=hRight;
}
void Rectangle::setlLeft(const Coordinate& lLeft){
    this->lLeft=lLeft;
}
void Rectangle::setlRight(const Coordinate& lRight){
    this->lRight=lRight;
}


// get functions

double Rectangle::getLength() const{
    return  hRight.getX() - hLeft.getX();
}

double Rectangle::getWidth() const{
    return hLeft.getY() - lLeft.getY();
}