#include<iostream>
using namespace std;

void swap(int &x, int &y){
   int temp=x;
   x=y;
   y=temp; 
    // cout<<x<<" "<<y<<endl;
}

int main()
{  
    int x=4, y=6;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}