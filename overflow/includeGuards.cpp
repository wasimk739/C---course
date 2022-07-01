// Include guards ensures that compiler will process this file only once, no matter how many times it is included. Include guards are just series of preprocessor directives that guarantees file will only be included once.
// Preprocessors used:

// #ifndef: if not defined, determines if provided macros does not exists.
// #define: Defines the macros.
// #endif: Closes off #ifndef directive.
// The block of statements between #ifndef and #endif will be executed only if the macro or the identifier with #ifndef is not defined.

// Syntax:
// #ifndef ANIMAL(Any word you like but unique to program)
// #define ANIMAL(same word as used earlier)

// class Animal {
//     // Code
// };

// #endif

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
