#include<iostream>

using namespace std;

void manipulateWithvalue(int value) {	// Original value copied in a new variable
	cout << "2. Value passed in pass-by-value function: " << value << endl;
	value = value * 10;
	cout << "3. Input during manipulation using pass-by-value: " << value << endl;
}

void manipulateWithreference(int *pvalue) {	// Original value's pointer to address
	cout << "6. Value passed in pass-by-reference function: " << *pvalue << endl;
	*pvalue = *pvalue * 10;
	cout << "7. Input during manipulation using pass-by-reference: " << *pvalue << endl;
}

int main() {

	cout << "Enter a number >" << flush;
	int input;
	cin >> input;
	cout << "===============================" << endl;
	cout << "1. Your input: " << input << endl;

	manipulateWithvalue(input);		// Value of the input is passed
	cout << "4. Finally your input: " << input << endl;
	cout << "===============================" << endl;

	cout << "5. Your input: " << input << endl;
	manipulateWithreference(&input);	// Address of the value passed
	cout << "8. Finally your input: " << input << endl;
	
	return 0;
}