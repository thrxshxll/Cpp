#include <iostream>
#include "Rational.h"
using namespace std;

int main(){
    Rational n1{1,2};
    Rational n2{2, 3};
    Rational n3{2, 4};
    Rational n4{2, 0};

    cout << n4.toRationalString() << endl;
    cout << n3.toRationalString() << endl;

    /*cout << n1.toRationalString() << endl;
    cout << n2.toRationalString() << endl;

    // n1.add(n3);
    n1.divide(n3);
    cout << n1.toRationalString() << endl;

    cout << n1.toDouble() << endl;*/
}