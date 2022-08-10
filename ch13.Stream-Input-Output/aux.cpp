#include <iostream>
#include <iomanip>
using namespace std;


ostream& nl(ostream& output){
    return output << '\n' << flush;
}

void printt(char* arg){
    cout << arg << endl;
}

int main(){

    char str[16] = "n0xcimento";

    printt(str);
}