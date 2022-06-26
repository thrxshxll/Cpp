#include <iostream>
using namespace std;

int main(){

    unsigned int bin, dec{0}, x;

    bin=101011;

    x=1;
    while(bin){
       // cout << bin % 10 << endl;

       if(bin % 10){
        dec+=x;
       } x *= 2;

       bin /= 10;
    }

    cout << dec << endl;
}