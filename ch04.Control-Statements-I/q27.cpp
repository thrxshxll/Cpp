#include <iostream>
using namespace std;

int main(){
    int number;
    int d1,d2,d3,d4,d5, rmdr;

    cout << "Enter a five digit number: ";
    cin >> number;

    d5=number%10;
        number/=10;
    d4=number%10;
        number/=10;
    d3=number%10;
        number/=10;
    d2=number%10;
        number/=10;
    d1=number%10;
        number/=10;

    if(d1==d5){
        if(d2==d4){
            cout << "Palindromes" << endl;
        }
    }
}