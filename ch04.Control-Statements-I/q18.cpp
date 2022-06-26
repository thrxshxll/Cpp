#include <iostream>
using namespace std;

int main(){
	unsigned n=1;

	cout << "N\t5*N\t10*N\t15*N" << endl;
	while(n<=12){

		cout << n << "\t" << 5*n << "\t" << 10*n << "\t" << 15*n << endl;

		n++;
	}

}