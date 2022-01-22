#include<iostream>

using namespace std;

int main() {

	int i = 0;

	cout << "\tWhile Loop started!" << endl;
	while (i <= 5) {	// While Loop
		cout << "Iteration no: " << i << endl;
		i ++;			// Value updation by 1
	}
	cout << "\tWhile Loop ended!" << endl;

	cout << "\n" << endl;

	cout << "\tDo-While Loop started!" << endl;
	const string password = "hello";
	string input;
	do                           // Do-While Loop
	{                            // Runs atleast once
		cout << "Enter the password >" << flush;
		cin >> input;
	} while (input != password);
	cout << "Password Accepted!" << endl;
	cout << "\tDo-While Loop ended!" << endl;

	cout << "\n" << endl;

	cout << "\tFor Loop started!" << endl;
	for (int i = 0; i < 5; i++)			// For Loop
	{							// Used for definite number of iterations
		cout << "Statement No.: " << i << endl;
	}
	cout << "\tFor Loop ended!" << endl;

	return 0;
}