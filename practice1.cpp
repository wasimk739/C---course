#include <iostream>

using namespace std;

int main()
{
    // for(int i {1}, j {5}; i<=5; i++, j++){
int arr1[6]={1,2,3,4,5};
int arr2[6]={5,5,5,5,5};
int arr3[6];
    for (int i = arr1[0]; i <= 5; i++)
    {
        for (int j = arr2[0]+1; j <= 5; j++)
        {
            arr3[i]=(arr1[i] * arr2[j]);
            cout << arr1[i] << "*" << arr2[j] << ": " << arr3[i] << endl;
        }
    }
}