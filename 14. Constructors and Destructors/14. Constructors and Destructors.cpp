#include<iostream>
#include "Atom.h"

using namespace std;

int main() {

	cout << "Starting.." << endl;
	{							// Seprate code-block
		Atom plant;				// Class instantiated
		plant.energy();
	}

	cout << "\n" << flush;
	cout << "Exiting.." << endl;
	return 0;
}