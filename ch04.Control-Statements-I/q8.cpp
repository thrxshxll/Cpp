#include <iostream>

using namespace std;

int main(){
	unsigned int x, y, ans{1}, i{1}, power{1};

	cout << "type x power y: ";

	cin >> x >> y;

	while(i<=y){
		ans *= x;
		i++;
	}
	cout << "x power y is " << ans << endl;
}