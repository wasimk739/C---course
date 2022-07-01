// C++ program to create a header
// file named as "Animal.h"
#include <iostream>
#include <string>
using namespace std;

// Animal Class
class Animal {
	string name, color, type;

public:
	// Function to take input
	void input()
	{
		name = "Dog";
		color = "White";
	}

	// Function to display the member
	// variables
	void display()
	{
		cout << name << " is of "
			<< color << endl;
	}
};

// Checks if _ANIMALS IF DECLARED
#ifndef _ANIMALS_

// Defines _ANIMALS_ if above
// conditions fails
#define _ANIMALS_

#include <iostream>
#include <string>
using namespace std;

// Animal Class
class Animal {
	string name, color, type;

public:
	// Function to take input to
	// member variable
	void input()
	{
		name = "Dog";
		color = "White";
	}

	// Function to display the
	// member variable
	void display()
	{
		cout << name << " is of"
			<< color << endl;
	}
};
#endif // _ANIMALS_
