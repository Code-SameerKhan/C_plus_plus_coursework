#pragma once
#ifndef OFFICE_H_
#define OFFICE_H_

#include<iostream>

using namespace std;

class Office
{
public:
	Office(string newName);
	Office(string newName, int newAge);
	Office();
	string toString();
private:
	string name;
	int age;
	int salary;
	string position;
};
#endif /*OFFICE_H_*/


