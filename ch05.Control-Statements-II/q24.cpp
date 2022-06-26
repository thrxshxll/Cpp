#include <iostream>
using namespace std;

int main(){


    int esq{2}, dir{8}, h{9};


    for(int line{1}; line<=h; line++){

        if(line == 1 || line == h){
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
            if(line <= (h/2)){
                esq++; dir--;
            }else{
                esq--; dir++;
            }
        }
    }
}