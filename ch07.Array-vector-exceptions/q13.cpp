#include <algorithm>
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

const size_t arraySize{20};

int main(){
    array<int, arraySize> arrayx{};

    for(unsigned int value, count{0}; count < 6; count++){
        cin >> value;

        sort(arrayx.begin(), arrayx.end());
        if(!binary_search(arrayx.begin(), arrayx.end(), value)){
            arrayx[count]=value;
        }
    }

    for(const auto& item : arrayx){
        if(item != 0)
        cout << setw(4) << item;
    }cout << endl;
}