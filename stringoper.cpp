// Write a C++ program to remove the character in a given position of a given string. The given position will be in the range 0..string length -1 inclusive.

#include <iostream>

using namespace std;

string test(string str, int n)
        {
            return str.erase(n, 1);
        }
        
int main() 
 {
  cout << test("Pythonn", 1) << endl;  
  cout << test("Python", 0) << endl;  
  cout << test("Python", 4) << endl;  
  return 0;    
}
