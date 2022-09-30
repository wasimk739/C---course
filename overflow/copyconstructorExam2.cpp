#include<iostream>
using namespace std;

class point{
    private:
    int x,y;
    public:
    point(int x1, int y1){
        x=x1;
        y=y1;
    }
    point(point &p1){
        x=p1.x;
        y=p1.y;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
};


int main()
{
    point p1(10,15);
    point p2=p1;
    cout<<"p1.x is = "<<p1.getx();
    cout<<"p1.y is = "<<p1.gety();
    return 0;
}


// shallow copy: dono variable k liye seperate memory alag alag change karna honga  
// deep copy : ek variable ka reference dusre variable me aur changes ek me karenge toh dono me reflect karenga 