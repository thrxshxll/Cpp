#include <iostream>
#include <iomanip>
using namespace std;

bool isFactor(int a, int b);

int main(){
    int x,y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "are factors ? : " << boolalpha << isFactor(x,y) << endl;
}

bool isFactor(int a, int b){
    return (a % b == 0) ? 1 : 0;
}