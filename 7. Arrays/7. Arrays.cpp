#include<iostream>

using namespace std;

int main() {

	cout << "Ararys of Integers" << endl;
	cout << "==================" << endl;

	int values[3]; // Array declaration

	values[0] = 88;
	values[1] = 4;
	values[2] = 22;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << endl << "Array of Doubles" << endl;
	cout << "==================" << endl;

	double numbers[4] = { 1.21,2.32,76.32,12.1 }; // Array declaration with initialization
												  // With intialize, don't need to provide size
	for (int i = 0; i < 4; i++)
	{
		cout << "Element at " << i << ": position " << numbers[i] << endl;
	}

	string password = "hello";
	string input;
	do
	{
		cout << endl << "Enter the password >" << flush;
		cin >> input;
		if (input == password)
		{
			cout << "Password accepted!" << endl;
			break;  // break statement
		}
		else
		{
			cout << "Access Denied!" << endl;
		}
	} while (true);
	return 0;
}