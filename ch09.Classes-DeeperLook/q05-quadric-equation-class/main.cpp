/*

9.5 (Quadratic Equations Class) Create a class called Quadratic for performing arithmetic on
and solving quadratic equations. A quadratic equation is an equation of the form
ax2 + bx + c = 0
where a ≠ 0 . Use double variables to represent the values of a, b, and c and provide a constructor
that enables objects of this class to be initialized when they are created. Give default values of a = 1,
b = 0, and c = 0. Create a char variable called variable to represent the variable used in the equation
and give it a default value of x. The constructor should not allow the value of a to be 0. If 0 is given,
assign 1 to a). Provide public member functions that perform the following tasks.

a) add —adds two Quadratic equations by adding the corresponding values of a, b, and c.
The function takes another object of type Quadratic as its parameter and adds it to the
calling object.
b) subtract —subtracts two Quadratic equations by subtracting corresponding values of
a, b, and c. The function takes another object of type Quadratic as its parameter and
subtracts it from the calling object.
c) toString —returns a string representation of a quadratic equation in the form ax2 + bx +
c = 0 using the actual values of the data members.
d) solve —solves a quadratic equation using the quadratic formula x = (– b ± sqrt(b^2 – 4ac))/2a

and displays the solutions if (b2 − 4ac) is greater than 0. Otherwise, it displays “No Real
Roots.”

*/

// Yuri, Jun 2022


#include <iostream>
#include "Quadratic.h"
using namespace std;

int main(){
    Quadratic o1, o2{1,5,3}, o3{2,8,10};

    cout << "Quadratic 01: " << o1.toString() << endl;
    cout << "Quadratic 02: " << o2.toString() << endl;
    cout << "Quadratic 03: " << o3.toString() << endl;

    cout << "\nAdding Q02 to Q03: ";
    o3.add(o2);
    cout << o3.toString() << endl;
    cout << "\nSubtracting Q02 from Q03: ";
    o3.subtract(o2);
    cout << o3.toString() << endl;

    cout << "\nSolving " << o2.toString() << " :" << endl;
    o2.solve();    
}