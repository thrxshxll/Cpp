#include <iostream>
using namespace std;

int main(){
    int value{3};
    int *iPtr{value}, result;
    void *genericPtr{iPtr};
    result = *genericPtr + 3;
}