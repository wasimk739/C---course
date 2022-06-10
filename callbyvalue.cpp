#include <iostream>

using namespace std;

int test(int formal){   //formal is a copy of actual
    cout<<formal<<endl;   //50
    formal=100;            //only changes the local copy
    cout<<formal;          //100
    return 0;
}

int main(){
    int actual=50;
    cout<<actual<<endl;        //50
    test(actual);             //pass in 50 to test
    cout<<endl<<actual<<endl;        //50 didn't change
    return 0;   
}