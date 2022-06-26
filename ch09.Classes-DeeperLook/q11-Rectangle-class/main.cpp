#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle ob{3,4};

    cout << ob.perimeter() << "\n" << ob.area() << endl;
}