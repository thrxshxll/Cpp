/*

13.13 (Dealing with extra input characters) When reading user input from the standard input using
cin, the user can provide more data than is needed. For example, if you ask a user to enter their first
name, they could type their first name followed by extra characters, such as “James foo”. In such
cases, cin will read the string “James” and leave the rest, foo, in the input stream to be read by the
next input statement, which is probably not what you want. Write a program that asks a user for
their first name, last name, and year of birth, one after another in this order, and try to supply extra
characters after you type the last name. Can you explain what is going on? Correct this problem by
discarding all characters up to the end of the line after you read the first name and last name.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    char name[16],lastname[16],birthyear[16];

    cout << "Enter your name, lastname and birth year:\n";
    cin.getline(name,16);
    cin.getline(lastname,16);
    cin.getline(birthyear,16);

    cout << "Name: " << name
        << "\nLast name: " << lastname
        << "\nbirth year: " << birthyear << endl;
}