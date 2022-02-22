#include<iostream>		// Global header file
#include "Daffy.h"		// Local header file

using namespace std;

void Daffy::speak() {		// Speak() function definition
	if (happy)
	{
		cout << "Quack Quack!" << endl;
	}
	else
	{
		cout << "Argghh" << endl;
	}
}

void Daffy::happyMood() {	// Constructor method to use private variable
	happy = true;
}

void Daffy::sadMood() {
	happy = false;
}