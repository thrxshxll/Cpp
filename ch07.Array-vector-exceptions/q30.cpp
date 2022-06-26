#include <iostream>
#include <iomanip>
#include <iterator>
#include <algorithm>
// #include <array>
using namespace std;

void printArray(const array<int, 8>& ar, size_t begin, size_t end);

int main(){
    array<int, 8> set{7,1,3,4,5,6,2,8};

    // sort(begin(set), end(set));
    sort(&set[0], &set[7]);

    printArray(set, 0, 7);
}


void printArray(const array<int, 8>& ar, size_t begin, size_t end){
    if(begin==end){
        return;
    }else{
        // printArray(ar, begin+1, end);
        cout << setw(3) << ar[begin];
        printArray(ar, begin+1, end);
    }
}