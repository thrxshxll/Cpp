#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main(){

    const size_t arraySize{4};
    array<array<int, arraySize>, arraySize> twoDim;

    for(size_t count{1}, row{0}; row<twoDim.size(); ++row){

        for(size_t column{0}; column<twoDim[row].size(); ++column){
            twoDim[row][column] = count++;
        }
    }


    // column header
    cout << setw(7) << "";
    for(unsigned int count{0}; count < arraySize; ++count){
        cout << "col" << count << "  ";
    }cout << endl;


    for(size_t row{0}; row < twoDim.size(); ++row){

        cout << "row " << row;

        for(size_t column{0}; column < twoDim[row].size(); ++column){
            

            cout << setw(6) << column;
        } cout << endl;
    }
}