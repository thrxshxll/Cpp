#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	int sum,prod,avarage,smallest,largest;

	cout << "Input three integers: ";
	cin >> a >> b >> c;

	sum = a + b + c;
	cout << "Sum is " << sum << endl;

	avarage = (a+b+c)/3;
	cout << "Avarage is " << avarage << endl;

	prod = a * b * c;
	cout << "Product is " << prod << endl;	

	if(a<b && a<c){
		cout << "Smallest is " << a << endl;
	}

	if(b<a && b<c){
		cout << "Smallest is " << b << endl;
	}

	if(c<a && c<b){
		cout << "Smallest is " << c << endl;
	}

	if(a>b && a>c){
		cout << "Largest is " << a << endl;
	}

	if(b>a && b>c){
		cout << "Largest is " << b << endl;
	}

	if(c>a && c>b){
		cout << "Largest is " << c << endl;
	}
}