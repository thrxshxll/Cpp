#include <iostream>
#include <iomanip>
using namespace std;

int fat(unsigned int num, int ident = 5);

int main(){
    int num;

    cout << "Enter number: ";
    cin >> num;

    fat(num);
}

int fat(unsigned int num, int ident){
    if(1 == num){
        cout << setw(ident) << num << endl;
        return num;
    }else{
        int aux{fat(num-1, ident+2)};
        cout << setw(ident) << num * aux << endl;
        return num * aux;
    }
}