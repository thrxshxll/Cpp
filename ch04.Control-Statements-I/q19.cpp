#include <iostream>
using namespace std;

int main(){
    int largest1{0}, largest2{-1}, number, counter{0};

    while(counter < 10){
        cout << "Enter a integer: ";
        cin >> number;

        if(largest1 < number){
            if(largest2 < largest1){
                largest2 = largest1;
                largest1 = number;
            }
        }
        counter++;
    }

    cout << "largest1: " << largest1 << "\nlargest2: " << largest2 << endl;
}