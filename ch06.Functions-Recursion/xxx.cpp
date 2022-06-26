#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <random>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    int num{1240}, count{1};

    while(count < num){
        count *= 10;
    }

    cout << count << endl;
}