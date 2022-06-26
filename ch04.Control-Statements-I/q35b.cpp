#include <iostream>

using namespace std;

int main(){
    unsigned int n, fatn, terms;
    double e{1};

    cout << "Enter amount terms to calculate e: ";
    cin >> terms; terms--;

    while(terms){
        n=terms;
        fatn=1;
        while(n>1){
            fatn*=n;
            n--;
        }
        e += 1/static_cast<double>(fatn);
        terms--;  
    }
    cout << "e = " << e << endl;
}