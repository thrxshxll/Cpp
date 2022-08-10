/*

13.12 (Displaying numbers in different bases) Write a program that displays a range of numbers
in decimal, octal, and hexadecimal. Ask the user for a lower and upper limit, both inclusive, and
display the numbers in three columns: decimal, octal, and hexadecimal.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int low, upper;
    cout << "Enter a lower and a upper range positive integer: ";
    cin >> low >> upper;

    cout << "\n[ dec | oct | hex ]" << endl;

    while(low <= upper){
        cout << showbase << setw(4) << dec << low
            << setw(7) << oct << low
            << setw(7) << hex << low << endl;
            ++low;
    }
}