#include "Office.h"
#include<sstream>

Office::Office(string newName) {		// Constructor with same name
	name = newName;
	age = 40;
	salary = 80000;
	position = "Manager";
}

Office::Office(string newName, int newAge) {
	name = newName;
	age = newAge;
	salary = 50000;
	position = "Sales";
}

Office::Office() {
	string newName;
	int newAge;
	int newSalary;
	string newPosition;
	cout << "Name > " << flush;
	cin >> newName;
	name = newName;
	cout << "Age > " << flush;
	cin >> newAge;
	age = newAge;
	cout << "Salary > " << flush;
	cin >> newSalary;
	salary = newSalary;
	cout << "Position > " << flush;
	cin >> newPosition;
	position = newPosition;
}

string Office::toString() {
	stringstream ss;		// String stream to output strings in one line

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;
	ss << "; Salary: ";
	ss << salary;
	ss << "; Position: ";
	ss << position;

	return ss.str();
}
