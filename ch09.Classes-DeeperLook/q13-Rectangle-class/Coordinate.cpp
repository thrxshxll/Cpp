#include <stdexcept>
#include "Coordinate.h"
using namespace std;

// constructor
Coordinate::Coordinate(const double x, const double y){
    setX(x);
    setY(y);
}

// set functions
void Coordinate::setX(double arg){
    if(0.0 < arg && arg < 20.00){
        x=arg;        
    }else{
        throw invalid_argument("Out Of first quadrant or larger than 20.00");
    }
}
void Coordinate::setY(double arg){
    if(0.0 < arg && arg < 20.00){
        y=arg;
    }else{
        throw invalid_argument("Out Of first quadrant or larger than 20.00");
    }
}

// get functions
double Coordinate::getX() const{
    return x;
}
double Coordinate::getY() const{
    return y;
}