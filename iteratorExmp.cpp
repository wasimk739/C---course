#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
#include <array>
using namespace std;
int main()
{
    // vector<int> ar = { 1, 2, 3, 4, 5 };
      
    // // Declaring iterator to a vector
    // vector<int>::iterator ptr;
      
    // // Displaying vector elements using begin() and end()
    // cout << "The vector elements are : ";
    // for (ptr = ar.begin(); ptr < ar.end(); ptr++)
    //     cout << *ptr << " ";

    vector <int> v1 = {1,2,3,4,7,5};
    vector <int> :: iterator itr;

    cout<<"the vector elements are : ";
    for(itr = v1.begin(); itr < v1.end(); itr++)
    cout << *itr <<" ";
    
    array<int, 5> arr {1,2,3,4,5};
    array <int, 5> :: iterator ptr;

    cout<<"array elements are";
    for(ptr = arr.begin(); ptr < arr.end(); ptr++)
    cout << *ptr<<" ";

    return 0;    
}