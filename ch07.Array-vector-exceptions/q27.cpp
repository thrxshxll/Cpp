#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

const size_t arraySize{999};

int main(){
    array<int, arraySize> ar{};

    for(size_t indx{2}; indx < ar.size(); indx++){
        if(indx%2 != 0 && indx%3 != 0){
            cout << setw(4) << indx;
        }
        if(indx%16==0){
            cout << endl;
        }
    }
}