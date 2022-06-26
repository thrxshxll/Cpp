#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int laps_complet;
	double sponsorship, total{0};

	cout << "Laps complet ( 0 to quit ): ";
	cin >> laps_complet;

	while(laps_complet){
		cout << "Sponsorship: ";
		cin >> sponsorship;

		double ans{static_cast<double>(laps_complet) * sponsorship};

		if(laps_complet>40){
			int diff{laps_complet - 40};
			ans += diff * (sponsorship*0.5);
		}

		total += ans;

		cout << setprecision(2) << fixed;
		cout << "Student contribution: " << ans << endl; 

		cout << "\nLaps complet ( 0 to quit ): ";
		cin >> laps_complet;
	}

	cout << "Total funds raised: " << total << endl;
}