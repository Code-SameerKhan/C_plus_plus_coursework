#include<iostream>
#include"Person.h"

using namespace std;

int main() {
	Person person1;
	cout << person1.toString() << "; Memory location: " << &person1<< endl; 
				// '&' tells memory address of the object
	Person person2("Joe", 32);
	cout << person2.toString() << "; Memory location: " << &person2 << endl;

	Person person3("Sue");
	cout << person3.toString() << "; Memory location: " << &person3 << endl;


	return 0;
}