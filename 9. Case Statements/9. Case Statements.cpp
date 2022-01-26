#include<iostream>

using namespace std;

int main() {

	cout << "Enter an Integer > " << flush;
	int number;
	cin >> number; 

	switch (number) // Works like If-Else but faster. Can only use Integers as case
	{
	case 4:
		cout << "Value = 4" << endl;
		break;
	case 5:
		cout << "Value = 5" << endl;
		break;
	case 6:
		cout << "Value = 6" << endl;
		break;
	default:
		cout << "Unrecognised!" << endl;
		break;
	}
}