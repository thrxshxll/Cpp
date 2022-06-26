#include <iostream>

using namespace std;

int main(){
	int n1,n2,sum;

	cout << "enter two numbers: ";
	cin >> n1 >> n2;

	sum=n1+n2;

	if(n1%2 == 0){
		cout << "Odd number" << endl;
	}else{
		cout << "Even number" << endl;
	}

	if(n2%2 == 0){
		cout << "Odd number " << endl;
	}else{
		cout << "Even number" << endl;
	}

	if(sum%2 == 0){
		cout << "sum " << sum << " is a odd numer" << endl;
	}else{
		cout << "Intergers's sum it's not Odd number" << endl;
	}
}