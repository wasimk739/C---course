#include<iostream>
#include <array>
using namespace std;

void print_array(int arr[], size_t size){
for (size_t i=0; i<size; ++i)
cout<<arr[i]<<" ";
}

int main()
{
    int numbers[] {2,34,45,5,4};
    print_array(numbers, 5);
    return 0;
}