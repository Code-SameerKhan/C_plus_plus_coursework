#include<iostream>
#include "Office.h"

using namespace std;

int main() {
	Office employee1("Michael");		// Constructor called chosen the one with 1 user defined parameter
	cout << employee1.toString() << endl;
	
	Office employee2("Jim",29);
	cout << employee2.toString() << endl;
	{
		cout << "\tAdding record" << endl;
		Office employee3;		// Default constructor with no defined parameters
		cout << employee3.toString() << endl;
	}
	return 0;
}
