#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle ob{{2,8}, {8,8}, {2,4}, {8,4}};

    ob.setFillCharacter('+');
    ob.setPerimeterCharacter('*');
    ob.draw();

    cout << "Rectangle Information:\nlength: " << ob.getLength() << "\nwidth: " << ob.getWidth() << endl;
    cout << "Perimeter: " << ob.perimeter() << "\n" << "Area: " << ob.area() << endl;
}