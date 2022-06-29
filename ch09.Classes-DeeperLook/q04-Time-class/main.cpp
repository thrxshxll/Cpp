/*

9.4 (Enhancing Class Time) Provide a constructor that’s capable of using the current time from
the time and localtime functions—declared in the C++ Standard Library header <ctime>—to ini-
tialize an object of the Time class. For descriptions of C++ Standard Library headers, classes and
functions, see http://cppreference.com.

*/


#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

int main(){
    Time ob1;

    cout << "local time ob1: " << ob1.toString() << endl;

    Time ob2;

    cout << "local time ob2: " << ob2.toString() << endl;
}