#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double km;

	cout << "Enter kilometers driven ( 0 to quit ): ";
	cin >> km;

	while(km){
		double liter, km_liter;

		cout << "Enter liters used: ";
		cin >> liter;

		km_liter = km/liter;
		cout << setprecision(6) << fixed;
		cout << "Total kilometers per liter: " << km_liter << endl;

		cout << "\nEnter kilometers driven ( 0 to quit ): ";
		cin >> km;
	}
}