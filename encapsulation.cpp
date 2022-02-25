// // // Encapsulation 

// // The meaning of encapsulation is to make sure that "sensitive" data is hidden from users.to achive this,
// // you must declare class variables/attributes private (cannot be accessed from outside the class). 
// // If you want others to read or modify the value of a private member, you can provide public get and set methods  #include <iostream>

// ACCESS PRIVATE MEMBERS

#include <iostream>
using namespace std;

class employee { 
    private:
    int salary;
    public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
    
};
int main(){
    employee myobj;
    myobj.setSalary(3000);
    cout<<myobj.getSalary();

}