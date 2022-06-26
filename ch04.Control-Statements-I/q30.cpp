#include <iostream>
#include <climits>
using namespace std;


int main(){
    int n1, n2, aux;


    n1=0;
    n2=1;

    while(n2 > 0){
        cout << n1 << ", ";

        aux = n2 + n1;
        n1 = n2;
        n2 = aux;
    } cout << endl;
}