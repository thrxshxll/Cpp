#include <iostream>
using namespace std;

int main(){
    int c, smallest{0};

    cout << "Enter loop quantity: ";
    cin >> c;

    for(int input; c>0; c--){

        cin >> input;

        if(smallest < input){
            smallest=input;
        }
    }
    cout << "smallest value: " << smallest << endl;
}