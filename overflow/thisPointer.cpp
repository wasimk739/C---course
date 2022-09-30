#include<iostream>
using namespace std;
class A{
    int a=5;
    public:
        int setDataa(int a){
            cout<<a;
        }
    public:
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4);
    a.getData();
    a.setDataa(10);
    return 0;
}