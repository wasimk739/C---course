// Constant Variables:
// There are a certain set of rules for the declaration and initialization of the constant variables:

// The const variable cannot be left un-initialized at the time of the assignment.
// It cannot be assigned value anywhere in the program.
// Explicit value needed to be provided to the constant variable at the time of declaration of the constant variable.


// C++ program to demonstrate the
// the above concept
#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
 
    // const int x;  CTE error
    // x = 9;   CTE error
    const int y = 10;
    cout << y;
 
    return 0;
}