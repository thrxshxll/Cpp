#include <iostream>
#include "invoice.h"

using namespace std;

int main(){
	Invoice gpu{"gtx666","GPU - DDR4 - 6666MHZ", 16, 784};

	cout << "Number: " << gpu.getNumber() << endl;
	cout << "Description: " << gpu.getDescription() << endl;
	cout << "Quantity: " << gpu.getQuantityPurchased() << endl;
	cout << "Invoice Amount: " << gpu.getInvoiceAmount() << endl;
}