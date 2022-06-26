/*

(Enhanced Quadratic Class) Enhance the Quadratic class of Exercise 9.5 by introducing
three overloaded operators as follows:

a) Addition ( + ): adds two Quadratic objects together.
b) Subtraction ( - ): subtracts one Quadratic object from another.
c) Output operator (<<) : displays a Quadratic equation in the form ax 2 + bx + c = 0.

Write a test program to demonstrate the capabilities of the enhanced Quadratic class.

*/

#include <iostream>
#include <iomanip>
#include "Quadratic.h"
using namespace std;

int main(){
    Quadratic q1, q2{1,5,3}, q3{2,8,10};

// using overloaded operators
    cout << "Quadratic1 = " << q1 << endl;
    cout << "Quadratic2 = " << q2 << endl;
    cout << "Quadratic3 = " << q3 << endl;

    cout << "\nQ3 + Q2 = " << q3 + q2 << endl;
    cout << "Q2 - Q3 = " << q2 - q3 << endl;
}