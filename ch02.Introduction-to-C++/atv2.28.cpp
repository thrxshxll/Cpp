#include <iostream>

using namespace std;

int main(){
	int number,d1,d2,d3,d4,rmd;

	cout << ": ";
	cin >> number;

	d4=number%10;
	rmd=number/10;

	d3=rmd%10;
	rmd/=10;

	d2=rmd%10;
	rmd/=10;

	d1=rmd%10;
	rmd/=10;

	cout << d4 << "  " << d3 << "  " << d2  << "  " << d1 << "  "  << endl;
}