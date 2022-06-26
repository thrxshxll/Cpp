#include <iostream>
using namespace std;

int reverseInt(int num);

int main(){
    int x;

    cin >> x;

    cout << reverseInt(x) << endl;
}

int reverseInt(int num){
    int newn{0}, aux{num};

    for(unsigned int count{1}; count<=num; count*=10){
        newn*=10;
        newn+=aux%10;
        aux/=10;
    }return newn;
}