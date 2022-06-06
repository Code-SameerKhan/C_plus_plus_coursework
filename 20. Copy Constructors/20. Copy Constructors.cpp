#include<iostream>

using namespace std;

class Animal {
private:
	string name;
	string type;

public:
	Animal() { cout << "Object created.." << endl; }; // Constructor
	Animal(const Animal& other): name(other.name), type(other.type) { // Copy constructor
		cout << "Object created through copy constructor" << endl; // Only accepts const reference and methods
	};
	void setName(string name, string type) { this->name = name, this->type = type; };
	void speak() const { 
		cout << "I am a : " << name << endl;
		cout << "Animal type is: " << type << endl;
	}
};
int main() {
	Animal animal1;
	animal1.setName("Tiger","Canivore");
	animal1.speak();

	Animal animal2 = animal1; // Attributes of animal1 is copied in animal2, default inplimentation of constructor
								// Calls copy constructor
	animal2.setName("Cow","Herbivore");
	animal2.speak();

	Animal animal3(animal1); // Instead uses copy constructor
	animal3.speak();

	return 0;
}

