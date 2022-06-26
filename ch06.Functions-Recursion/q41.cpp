#include <iostream>
using namespace std;

int gcd(int a, int b);

int main(){
    int x, y;

    cout << "Enter two integeres: ";
    cin >> x >> y;

    cout << "gcd: " << gcd(x,y) << endl;
}

int gcd(int a, int b){
    if(0 == b){
        return a;
    }else{
        return gcd(b, a%b);
    }
}