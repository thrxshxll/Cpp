#include <iostream>
#include <cstdint>
#include <cmath>
using namespace std;

bool isDudeney(unsigned int num);

int main(){
    
    cout << "Dudeney numbers:" << endl;

    for(int64_t num{0}; num <1000'000'000; num++){
        // cout << isDudeney(num) << endl;
        if(isDudeney(num)){
            cout << num << endl;
        }
    }
}

bool isDudeney(unsigned int num){
    unsigned int sumDigits{0}, aux{num};

    while(aux){
        sumDigits+=aux%10;
        aux/=10;
    }

    if(sumDigits == cbrt(num)){
        return true;
    }else{
        return false;
    }
}