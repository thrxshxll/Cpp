#include <iostream>
using namespace std;

int main(){


    int esq{2}, dir{8};
    for(int line{1}; line<=9; line++){

        if(line == 1 || line == 9){
            for(int i{1}; i<=9; i++){
                cout << "#";
            }
            cout << endl;
        }else{
            
            for(int column{1}; column<=9; column++){

                if(column == 1 || column == 9){
                    cout << "#";
                }else{

                    if(esq<=column && column<=dir){
                        cout << "*";
                    }else{
                        cout << " ";                        
                    }
                }
            }
            cout << endl;
            if(line<5){
                esq++; dir--;
            }else{
                esq--; dir++;
            }
        }
    }
}