#include <iostream>

#include "utils.h" // Header file for function2

using namespace std;

void function1(); // Function prototyping for function1

int main() {
	function1();
	function2();

	return 0;
}

void function1() {
	cout << "Hello!" << endl;
}

void function2() {
	cout << "Nice to meet you!" << endl;
}