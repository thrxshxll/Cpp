#include <iostream>
#include <cstdint>
using namespace std;

int main(){

    int64_t fat;
    int x;

    for(unsigned int i{1}; i <= 100; i++){

        fat=1;
        x=1;
        while(x<=i){
            fat*=x;
            x++;
        }
        cout << "fat(" << i << ") = " << fat << endl;
    }
}