// Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.

#include <iostream>

using namespace std;

int test(int x, int y)
        {
            return x == y ? (x + y)*3 : x + y;
        }
        
        
int main() 
 {
  cout << test(1, 2) << endl;  
  cout << test(4, 2) << endl;  
  cout << test(2, 2) << endl;  
  return 0;    
}