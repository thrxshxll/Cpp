//that program calculates the product of three integers

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int x,y,z,result;

	cout << "enter three integers: ";
	cin >> x >> y >> z;

	result = x * y * z;

	cout << "The product is " << result << endl;

	return 0;
}