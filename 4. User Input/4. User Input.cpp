#include<iostream>

using namespace std;

int main() {
	cout << "Enter your name: " << flush; // Ouput in same line
	string name;
	cin >> name;
	cout << "Your name is " << name << endl;

	cout << "Enter your age: " << flush;
	int age;
	cin >> age;
	cout << "Your age is " << age << endl;

	return 0;
}