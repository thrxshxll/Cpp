#include <iostream>
using namespace std;

int main(){
    unsigned int side1, side2, hipotenuse;

    for(hipotenuse=1; hipotenuse <= 100; hipotenuse++){

        for(side1=1; side1 <= 100; side1++){

            for(side2=1; side2 <= 100; side2++){

                int h =  hipotenuse*hipotenuse;
                int s1 = side1*side1;
                int s2 = side2*side2;

                if(h == s1 + s2){
                    cout << hipotenuse << " " << side1 << " " << side2 << endl;
                }
            }
        }
    }
}