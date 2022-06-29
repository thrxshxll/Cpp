/*

9.11 (Rectangle Class) Create a class Rectangle with attributes length and width, each of which
defaults to 1. Provide member functions that calculate the perimeter and the area of the rectangle.
Also, provide set and get functions for the length and width attributes. The set functions should ver-
ify that length and width are each floating-point numbers larger than 0.0 and less than 20.0.

*/

// Yuri, Jun 2022

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle rectangle{3,4};

    cout << "Length and Width rectangle: " << rectangle.getLength()
        << " x " << rectangle.getWidth() << endl;

    cout << ob.perimeter() << "\n" << ob.area() << endl;
}