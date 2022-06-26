#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    vector<int> vectorx(0);
    
    for(unsigned int value, count{0}; count < 6; count++){
        cin >> value;

        sort(vectorx.begin(), vectorx.end());
        if(!binary_search(vectorx.begin(), vectorx.end(), value)){
            vectorx.push_back(value);
        }
    }

    for(auto& item : vectorx){
        if(item){
            cout << setw(4) << item;
        }
    }cout << endl;
}