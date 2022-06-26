#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

const size_t row{3}, column{3};

void printRow(const array<array<int, column>, row>& stock);
void printColumn(const array<array<int, column>, row>& stock);

int main(){
    array<array<int, column>, row> stock{
        1,2,4,
        8,16,32,
        3,5,7
        };

    // printRow(stock);
        printColumn(stock);
}

void printRow(const array<array<int, column>, row>& stock){
    for(size_t row{0}; row < stock.size(); row++){
        for(size_t column{0}; column < stock[row].size(); column++){
            cout << setw(3) << stock[row][column];
        }cout << endl;
    }
}

void printColumn(const array<array<int, column>, row>& stock){
    for(size_t column{0}; column < stock[row].size(); column++){
        for(size_t row{0}; row < stock.size(); row++){
            cout << setw(3) << stock[row][column];
        }cout << endl;
    }
}
