/*

9.7 (Name Class) A Name can find uses in many applications that involve people, for example
payroll and banking. Create a class called Name that contains data members of type string called
firstName, middleName, lastName, and salutation. Add a constructor that takes four parameters
which are used to initialize the four data members and a member function called toString that re-
turns the person’s full name in the form “salutation lastName, firstName middleName”. Finally,
add set and get functions for all data members.

*/

// Yuri, Jun 2022


#include <iostream>
#include "Name.h"
using namespace std;

int main(){
    Name person1{"yuri", "de Sousa", "nascimento", "Dr."};
    Name person2;

    cout << person1.toString() << endl;
    cout << person2.toString() << endl;

    person2=person1;
    person2.setFirstName("n0xc");

    cout << person2.toString() << endl;
}