#include <iostream>

using namespace std;

int main(){
	long var{10}, x{0};

	while(x < 11){
		cout << var-- << endl;
		x++;
	}
}