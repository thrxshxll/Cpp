/*

10.11 ( Polynomial Class) Develop class Polynomial . The internal representation of a Polynomial
is an array of terms. Each term contains a coefficient and an exponent—e.g., the term

2x 4

has the coefficient 2 and the exponent 4. Develop a complete class containing proper constructor
and destructor functions as well as set and get functions. The class should also provide the following
overloaded operator capabilities:

a) Overload the addition operator ( + ) to add two Polynomial s.
b) Overload the subtraction operator ( - ) to subtract two Polynomial s.
c) Overload the assignment operator to assign one Polynomial to another.
d) Overload the multiplication operator ( * ) to multiply two Polynomial s.
e) Overload the addition assignment operator ( += ), subtraction assignment operator ( -= ),
and multiplication assignment operator ( *= ).

*/

// Yuri, Jun 2022

#include <iostream>
#include "Polynomial.h"
using namespace std;

int main(){
    Polynomial pol0{1,2,2,3,3,4};
    Polynomial pol1{2,2,3,3,4,4,2,1};
    Polynomial pol2;
    Polynomial pol3{3,2,5,1,6,4};


    cout << "pol0: " << pol0.toString() << endl;
    cout << "pol1: " << pol1.toString() << endl;
    cout << "pol2: " << pol2.toString() << endl;
    cout << "pol3: " << pol3.toString() << endl;

    pol2 = pol0 + pol1;

    cout << "\npol2 = pol0 + pol1\npol2: " << pol2.toString() << endl;
    cout << "\npol2 - pol3 = " << (pol2 - pol3).toString() << endl;
}