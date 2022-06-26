#include <iostream>
using namespace std;

template <typename T>
T minimun(T num1, T num2){
    return (num1 <= num2) ? num1 : num2;
}

int main(){
    
    cout << "Enter two values: ";
    // int x, y;
    // char x, y;
    double x, y;
    cin >> x >> y;

    cout << "Minimun: " << minimun(x,y) << endl;
}