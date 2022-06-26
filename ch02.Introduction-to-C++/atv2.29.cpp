#include <iostream>

using namespace std;

int main(){
	int face;

	cout << "Face length\tSurface area\tVolume cube" << endl;
	face=1;
	cout << face << "\t" << face*face*6 << "\t" << face*face*face << endl;
	face++;
	cout << face << "\t" << face*face*6 << "\t" << face*face*face << endl;
	face++;
	cout << face << "\t" << face*face*6 << "\t" << face*face*face << endl;
	face++;
	cout << face << "\t" << face*face*6 << "\t" << face*face*face << endl;
}