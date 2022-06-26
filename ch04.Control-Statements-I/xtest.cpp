#include <climits>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int x, y, prod{1}, c=1;


    x=3;
    y=3;

    while(y>0){
        prod *= x;
        y--;
    }



    cout << "x^y = " << prod << endl;
}
