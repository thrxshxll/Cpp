/*

13.7 (Inputting Decimal, Octal and Hexadecimal Values) Write a program to test the inputting
of integer values in decimal, octal and hexadecimal formats. Output each integer read by the pro-
gram in all three formats. Test the program with the following input data: 10, 010, 0x10.

*/

#include <iostream>
#include <iomanip>
using namespace std;


ostream& nl(ostream& output){
    return output << '\n' << flush;
}


int main(){

    int n1, n2, n3;

    cin >> dec >> n1 >> oct >> n2 >> hex >> n3;

    cout << showbase << dec << n1 << nl << oct << n2 << nl << hex << n3 << endl;
}