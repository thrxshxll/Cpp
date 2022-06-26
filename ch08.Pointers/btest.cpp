#include <iostream>
using namespace std;

int main(){
    int set[4], in, indx{0};

    while(cin >> in){
        set[indx++]=in;
    }set[indx]=-1;

    indx=0;
    while(set[indx]!=-1){ 
        cout << set[indx++];
    }cout << endl;

    cin >> in;

    cout << in << endl;
}