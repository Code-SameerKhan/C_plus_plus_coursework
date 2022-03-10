#include "Person.h"
#include<sstream>

using namespace std;

Person::Person() {
	name = "";
	age = 0;
}

Person::Person(string name, int age) {
	this->name = name;	// Tells program 'this name' is equal to 'name' private variable
	this->age = age;	// saves the value at the address of the private variable
}

Person::Person(string name) {
	this->name = name;
	age = 30;
}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << " Age: ";
	ss << age;

	return ss.str();
}