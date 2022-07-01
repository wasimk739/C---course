// C++ program for the above approach
#include <iostream>
using namespace std;

// Function to return dynamic allocated
// array consisting integers individually
int *GetBigInteger(string str)
{
    long long int x = str.size(5000), a = 0;

    // Create an array to store the big
    // integer into it.

    // Make the array size same as the
    // size of string str
    int *arr = new int[str.size(5000)];

    // Loop to extract string elements
    // into the array one by one
    while (a != x)
    {

        // Subtracting '0' to convert
        // each character into digit

        // str[a] - '0'
        // = ASCII(str[a]) - ASCII('0')
        // = ASCII(str[a] - 48
        arr[a] = str[a] - '0';
        a++;
    }

    // Return the reference of the array
    return arr;
}

// Driver Code
int main()
{
    // Big Integer in form of string str
    string str = "12345678098765431234567809876543";

    // Function Call
    int *arr = GetBigInteger(str);

    // Print the digits in the arr[]
    for (int i = 0; i < str.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}
