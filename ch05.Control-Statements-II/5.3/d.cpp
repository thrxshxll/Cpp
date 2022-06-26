#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    

    for(unsigned int x{1}; x<=20; x++){
        cout << setw(2) << x << " ";

        if(x%5==0){
            cout << endl;
        }
    }
}