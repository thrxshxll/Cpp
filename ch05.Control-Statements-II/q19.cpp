#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double pi{0.0}, d{1.0};

    for(unsigned int term{1}; term <= 200000; term++){

        pi += pow(-1, term+1) * ( 4/d );

        d+=2.0;
    }

    cout << "Pi = " << pi << endl;

}