#include<iostream>
#include "Atom.h"

using namespace std;

Atom::Atom() { // Constructor Definition
	cout << "\tAtom created!" << endl;
	cout << "Enter number of electrons..>" << flush; // user input of private instance variable
	cin >> electrons;
}

Atom::~Atom() { // Destructor Definition --> Destroys instance -> Release memory
	cout << "\tAtom is destroyed!" << endl;
}

void Atom::energy() {	// Random function
	int e;
	e = electrons * 2;
	cout << "Energy released will be .. " << e <<" units" << endl;
}