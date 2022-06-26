#include <iostream>
using namespace std;

int fib(int num);

int main(){
    int term;

    cout << "Fibonacci term: ";
    cin >> term;

    cout << "fib(" << term << ") = " << fib(term) << endl;
}

int fib(int num){
    if(num == 0 || num == 1){
        return num;
    }else{
        return fib(num-1) + fib(num-2);
    }
}