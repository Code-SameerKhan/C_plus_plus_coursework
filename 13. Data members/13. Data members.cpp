#include<iostream>
#include "Daffy.h"

using namespace std;

int main() {
	Daffy duck;
	duck.happyMood();
	duck.speak();

	Daffy duck2;
	duck2.sadMood();
	duck2.speak();

	return 0;
}