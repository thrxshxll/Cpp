/*

13.11 (Length of a String) Write a program that inputs a string from the keyboard and determines
the length of the string. Print the string in a field width that is twice the length of the string.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    char str[64];

    cin.getline(str, 63);

    cout << "Str length: " << cin.gcount()
        << "\n'" << setw(cin.gcount()*2) << str << "'" << endl;
}