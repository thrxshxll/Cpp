#include <iostream>
using namespace std;

int main(){

    for(unsigned int line{1}; line <=10; line++){

        for(unsigned int column{line}, aux{10-line}, x{1}; x <= column+aux; x++){

            while(aux>=1){
                cout << " ";
                aux--;
            }

            while(column>=1){

                cout << "*";
                column--;
            }
        }cout << endl;
    }
}