#include <iostream>

using namespace std;

int main(){
    unsigned int n, fatn{1};

    cout << "Enter a nonnegative integer: ";
    cin >> n;

    while(n>1){
        fatn*=n--;
    }
    cout << "Fat(n) = " << fatn << endl;
}