#include<iostream>
using namespace std;

class Animal{
    private:
    string ani="lion";

    public:
    string show(){
        cout<<"I am a "<<ani<<endl;
    }
};

int main()
{
    Animal a;
    cout<<a.show();
    return 0;
}