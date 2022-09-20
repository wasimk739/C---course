#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        a=0;
    }
    Number(int num){
        a=num;
    }
    void display(){
        cout<<"the number is"<<a<<endl;
    }
};

int main()
{
    Number x(23),y,z;
    x.display();
    return 0;
}