//Call by value: when formal arguments are ordinary variables . int sum (int , int );

//Call by address: when formal arguments are pointer variables. Int sum (int *, int *);

//Call by reference: when formal arguments are reference variables. Int sum(int &, int &);

#include <iostream>

using namespace std;

void byValue(int *x, int *y){
 int temp;
 temp = *x;
 *x = *y; 
 *y = temp;
}
// int a =call by value, int &a = call by reference, int *a = call by address
int main(){
    int x = 4, y = 2;
    byValue(&x, &y); // call by reference 
    cout<<x<<","<<y;
    return 0;
}