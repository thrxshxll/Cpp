#include <iostream>

int main(){
    unsigned int sum{0};

    for(unsigned int count{1}; count<=99; count++){
        sum+=count;
    }std::cout << sum << std::endl;
}