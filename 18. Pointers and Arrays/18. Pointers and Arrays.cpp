#include<iostream>

using namespace std;

int main() {

	string texts[] = { "Duck","Chicken","Rooster" }; // Array

	int length = sizeof(texts) / sizeof(string);
	cout << length << endl;
	string *pTexts = texts; // Pointer towards starting of array

	for (int i = 0; i < length; i++) // Looping through array index
	{
		cout << pTexts[i] << " " << flush;
	}
	cout << endl;

	for (int i = 0; i < length; i++, pTexts++) // Looping through array pointer and increment
	{
		cout << *pTexts << " " << flush;
	}
	cout << endl;

	string* pElement = texts;  // Pointer for the starting element of array
	string* pEnd = &texts[2]; // Pointer for the end element

	while (true)
	{
		cout << *pElement << " " << flush;

		if (pElement == pEnd)	// Checking if current element is same as the end element
		{
			break;
		}

		pElement++;
	}
	return 0;
}