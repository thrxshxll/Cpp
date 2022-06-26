#include <iostream>
using namespace std;

int main(){
    int size_square, counter;

    cout << "Size of Square: ";
    cin >> size_square;

    int line, column;

    line=1;
    while(line<=size_square){

        column=1;
        while(column<=size_square){

            if(line == 1 or line == size_square){
                cout << "*";

            }else{
                cout << "*";

                int c{2};
                while(c <= size_square-1){
                    cout << " ";
                    c++;
                }
                cout << "*";
                break;
            }
            column++;
        }
        cout << endl;
        line++;
    }
}