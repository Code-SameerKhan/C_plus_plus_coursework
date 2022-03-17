#include<iostream>

using namespace std;

int main() {

	char text[] = "This is a test string";
	int nChars = sizeof(text)-1; // # of characters excluding the ending empty char
	char *pStart = text; // Pointer pointing towards first char
	char *pEnd = text + nChars - 1;	// Pointer for ending char 

	while (pStart < pEnd)
	{
		char save = *pStart;  // 3rd Variable to store intial value of start
		*pStart = *pEnd;
		*pEnd = save;	// Swapping

		pStart ++;
		pEnd --;
	}

	cout << text << endl;

	return 0;
}