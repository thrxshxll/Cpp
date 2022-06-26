#include <iostream>
using namespace std;

void makeRectangle(int xwith, int xheight);

int main(){
    int w,h;

    cout << "Enter WITH and HEIGHT of the rectangle: ";
    cin >> w >> h;

    makeRectangle(w,h);
}

void makeRectangle(int xwith, int xheight){
    for(unsigned int line{0}; line <xheight; line++){

        for(unsigned int column{0}; column < xwith; column++){
            cout << "*";
        }cout << endl;
    }
}