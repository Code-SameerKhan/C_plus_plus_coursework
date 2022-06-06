#include<iostream>

using namespace std;

class Animal {
private:
	string name;
	string type;

public:
	Animal() {
		cout << "Object created!" << endl;
	}
	Animal(const Animal& other) :
		name(other.name),
		type(other.type)
	{
		cout << "Object created by copy constructor!"<< endl;
	}
	~Animal() {
		cout << "Destructor called!" << endl;
	}
	void setName(string name, string type) {
		this->name = name;
		this->type = type;
	}
	void speak() {
		cout << "I am " << name << " and I am " << type << endl;
	}

};

int main() {
	Animal* panimal = new Animal(); // new keyword allocates memory specifically
									// gives user memory management
	panimal->setName("Tiger", "Wild"); // '.' operator has higher precedence than '*'
										// '->' used instead of '*' operator
	panimal->speak();

	// When using 'new' keyword always call destructor because auto memory management is disabled
	delete panimal; // frees up the space

	return 0;
}