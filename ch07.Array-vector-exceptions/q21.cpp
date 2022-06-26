/**
 * Falta fazer os Labels nos outputs
 * */

#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
const size_t row{3}, column{3};

void tabularFormat(const array<array<int, column>, row>& stock);
void totalProduct(const array<array<int, column>, row>& stock);
int main(){

    array<array<int, column>, row> stock{
        1,2,4,
        8,16,32,
        3,5,7
    };

    tabularFormat(stock);

    return 0xc;


    /*array<array<int, column>, row> stock{};
    unsigned int craftNumber, productNumber, qtyCompleted;

    cout << "craftperson number [1..3] - [0] to quit: ";
    cin >> craftNumber;

    while(craftNumber){
        cout << "product number [1..4]: ";
        cin >> productNumber;

        cout << "quantity completed: ";
        cin >> qtyCompleted;

        stock[craftNumber-1][productNumber-1]=qtyCompleted;

        cout << "\ncraftperson number [1..3] - [0] to quit: ";
        cin >> craftNumber;
    }*/
}

void tabularFormat(const array<array<int, column>, row>& stock){
    for(size_t row{0}; row < stock.size(); row++){
        unsigned int totalcraft{0};
        for(size_t column{0}; column < stock[row].size(); column++){
            cout << setw(4) << stock[row][column];
            totalcraft += stock[row][column];
        }cout << setw(4) << totalcraft << endl;
    }

    totalProduct(stock);
}

void totalProduct(const array<array<int, column>, row>& stock){
    for(size_t column{0}; column < stock[row].size(); column++){
        unsigned int total{0};
        for(size_t row{0}; row < stock.size(); row++){
            total += stock[row][column];
        }cout << setw(4) << total;
    }cout << endl;
}