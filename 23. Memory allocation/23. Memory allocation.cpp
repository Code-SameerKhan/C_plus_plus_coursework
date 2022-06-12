#include<iostream>

using namespace std;

class Alpha
{
public:
	Alpha() {
		cout << "\tObject created!" << endl;
		cout << "\t===============" << endl;
	};
	~Alpha() {
		cout << "\tDestructor called!" << endl;
	};
	void setLetter(string letter) {
		this->letter = letter;
	}
	void show() {
		cout << "\tLetter is " << letter << endl;
	}
private:
	string letter;
};

int main() {
	
	Alpha* pLetter = new Alpha[26];

	delete[]pLetter;

	return 0;
}