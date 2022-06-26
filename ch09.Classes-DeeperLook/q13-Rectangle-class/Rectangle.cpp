// Rectangle class member-function definitions.
#include <stdexcept>
#include <iostream>
#include <iomanip>
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

// verify wether, in fact, the coordinates form a rectangle
void Rectangle::setRectangle(const Coordinate& hLeft, const Coordinate& hRight, const Coordinate& lLeft, const Coordinate& lRight){
    double hLength{hRight.getX() - hLeft.getX()}, lLength{lRight.getX() - lLeft.getX()};
    double lWidth{hLeft.getY() - lLeft.getY()}, rWidth{hRight.getY() - lRight.getY()};

    if(hLength == lLength && rWidth == lWidth){
        if(hLength > lWidth){
            sethLeft(hLeft);
            sethRight(hRight);
            setlLeft(lLeft);
            setlRight(lRight);
        } // form rectangle
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

void Rectangle::draw(){
    for(const auto& row : Rectangle::box){
        for(const auto& column : row){
            if(column != '\0')
                cout << setw(2) << column;
            else
                cout << setw(2) << " ";
        }cout << endl;
    }
}

void Rectangle::setFillCharacter(char arg){
    if(arg!=' '){
        // draw box out
        for(size_t row{0}; row < box.size(); ++row){

            if(row == 0 || row == box.size()-1)
                for(size_t column{0}; column < box[row].size(); ++column){
                    box[row][column] = arg;
                }
            else{
                box[row][0] = arg;
                box[row][box.size()-1] = arg;
            }
        }
    }else
        throw invalid_argument("Empty character!");
}

void Rectangle::setPerimeterCharacter(char arg){
    if(arg!=' '){
        borderRectangle=arg;

        // cast to convert double to unsigned int type to be used in for() interators
        unsigned int hLeftY{static_cast<unsigned int>(hLeft.getY())};
        unsigned int lLeftY{static_cast<unsigned int>(lLeft.getY())};
        unsigned int lLeftX{static_cast<unsigned int>(lLeft.getX())};
        unsigned int lRightX{static_cast<unsigned int>(lRight.getX())};

        // draw rectangle in
        for(size_t row{hLeftY}; row > lLeftY; --row){
            for(size_t column{lLeftX}; column < lRightX; ++column){
                box[row][column] = borderRectangle;
            }
        }
    }else
        throw invalid_argument("Empty character!");   
}

// set Rectangle's coordinates
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