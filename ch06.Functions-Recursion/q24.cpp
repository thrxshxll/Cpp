// falha quando o número digitado tem final com o digito 0 (zero)

#include <iostream>
using namespace std;

int sizeInt(int n);
void invertInt(int& n);

int intPart(int a, int b = 1);
int intRmr(int a, int b = 1);

int main(){
    int number, size;

    cout << "Enter a number: ";
    cin >> number;
    invertInt(number);

    cout << "inverted number: " << number << endl;

    while(number){
        cout << intRmr(number) << "  ";
        number = intPart(number);
    }cout << endl;
}

int intPart(int a, int b){
    return a / (10 * b);
}

int intRmr(int a, int b){
    return a % (10 * b);
}

int sizeInt(int n){
    unsigned int count{0};
    while(n>0){
        n /= 10;
        ++count;
    }return count;
}

void invertInt(int& n){
    int newn{0};
    while(n){
        newn *= 10;
        newn += intRmr(n);
        n = intPart(n);
    } n = newn;
}