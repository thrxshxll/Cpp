// Rectangle class member-function definitions.
#include <stdexcept>
#include "Rectangle.h"
using namespace std;

// constructor
Rectangle::Rectangle(double length, double width){
    setLength(length);
    setWidth(width);
}

double Rectangle::perimeter(){
    return 2*length + 2*width;
}
double Rectangle::area(){
    return length*width;
}

// set functions
void Rectangle::setLength(double length){
    if(0.0 < length && length < 20.00){
        this->length=length;
    }else{
        throw invalid_argument("Out of range [0.0-20.00]");
    }
}
void Rectangle::setWidth(double width){
    if(0.0 < width && width < 20.00){
        this->width=width;
    }else{
        throw invalid_argument("Out of range [0.0-20.00]");
    }
}

// get functions
double Rectangle::getLength() const{
    return length;
}

double Rectangle::getWidth() const{
    return width;
}