#include<iostream>

using namespace std;

int main() {
	int catNumber = 5; // integer variable
	float totalWeight = 35.5; // float variable
	char color = 'b'; // single letter
	bool found = true; // boolean variable
	const float PI = 3.14; // constant 

	cout << "There are total " << catNumber 
		<< " cats with total weight of " << totalWeight << " kgs" << endl;
	cout << "Color code is " << color << " with pi value " << PI << endl;
	cout << "This is the end!" << endl;

	return 0;
}