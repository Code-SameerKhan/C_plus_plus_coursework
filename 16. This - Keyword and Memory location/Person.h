#pragma once

#ifndef PERSON_H_
#define PERSON_H_

#include<iostream>

using namespace std;

class Person
{
public:
	Person();
	Person(string name, int age);
	Person(string name);
	string toString();

private:
	string name; // Private Variables
	int age;
};

#endif /* PERSON_H_ */


