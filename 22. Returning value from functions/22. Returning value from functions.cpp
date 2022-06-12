#include<iostream>

using namespace std;

class Animal
{
private:
	string name;

public:
	Animal() { // constructor
		cout << "\tObject created!" << endl;
		cout << "\t===============" << endl;
	};
	Animal(const Animal& other) : // Copy constructor
		name(other.name) {
		cout << "\tObject created using copy constructor!" << endl;
		cout << "\t======================================" << endl;
	}
	~Animal() { // destructor
		cout << "\tDestructor called!" << endl;
		cout << "\t==================" << endl;
	};
	void setName(string name)
	{
		this->name = name;
	}
	void speak() {
		cout << "\tMy name is " << name << endl;
		cout << "\t==================" << endl;
	}

};

Animal *createAnimal() {
	Animal* pAnimal = new Animal(); // pointer to the object using manual memory allocation by 'new'
	pAnimal->setName("John"); // '.' precedence over '*'
	return pAnimal;
}

int main() {
	Animal* pRandomanimal = createAnimal(); // pointer to access the address to object in function
	pRandomanimal->speak();
	delete pRandomanimal; // deleting memory associated to object created by 'new' keyword
	return 0;
}