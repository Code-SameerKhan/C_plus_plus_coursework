#include<iostream>

using namespace std;

int main() {
	string password = "password";

	cout << "Enter the password > " << flush;
	string input;
	cin >> input;
	if (input == password) {
		cout << "Password is accepted!" << endl;
		int option;
		cout << "\tChoose any option:" << endl;
		cout << "\t1. To know the name press 1" << endl;
		cout << "\t2. To know the phone-number press 2" << endl;
		cout << "\t3. To know the place press 3" << endl;
		cin >> option;
		if (option == 1) {
			cout << "Sam" << endl;
		}
		else if (option == 2) {
			cout << "123456";
		}
		else if (option == 3) {
			cout << "Del";
		}
		else
		{
			cout << "Invalid Option!" << endl;
		}
	}
	else
	{
		cout << "Password is incorrect!" << endl;
		cout << "\tTry Again!";
	}
	return 0;

}