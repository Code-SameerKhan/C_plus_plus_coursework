#include<iostream>

using namespace std;

int Add(int x, int y)  // Function declaration
{
	return (x + y);    // Function definition
};

int Sub(int x, int y)
{
	return (x - y);
};

int Mul(int x, int y)
{
	return (x * y);
};

float Div(int x, int y)
{
	return (x / y);
};

int main() {
	int num1;
	int num2;
	int ans;
	cout << "\tCalculator" << endl;
	cout << "\t==========" << endl;

	cout << "Enter the first number.." << endl;
	cin >> num1;
	cout << "Enter the second number.." << endl;
	cin >> num2;
	
	cout << "\tChoose 1 for Addition" << endl;
	cout << "\tChoose 2 for Subtraction" << endl;
	cout << "\tChoose 3 for Multiplication" << endl;
	cout << "\tChoose 4 for Division" << endl;

	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		ans = Add(num1, num2);      // Function calling
		cout << "Solution is : " << ans << endl;
		break;
	case 2:
		ans = Sub(num1, num2);
		cout << "Solution is : " << ans << endl;
		break;
	case 3:
		ans = Mul(num1, num2);
		cout << "Solution is : " << ans << endl;
		break;
	case 4:
		if (num2 == 0)
		{
			cout << "Cannot perform division!" << endl;
			break;
		}
		else
		{
			ans = Div(num1, num2);
			cout << "Solution is : " << ans << endl;
			break;
		}
	default:
		cout << "Incorrect option!" << endl;
		break;
	}
	return 0;
}

