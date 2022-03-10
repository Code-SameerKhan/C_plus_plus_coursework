#include<iostream>
#include "Office.h"

using namespace std;

int main() {
	Office employee1("Michael");
	cout << employee1.toString() << endl;
	
	Office employee2("Jim",29);
	cout << employee2.toString() << endl;
	{
		cout << "\tAdding record" << endl;
		Office employee3;
		cout << employee3.toString() << endl;
	}
	return 0;
}