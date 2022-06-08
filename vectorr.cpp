#include <iostream>
#include <vector>

using namespace std; 

int main(){
    vector <int> L1{1,1,2,3,34,4};
    cout<<L1.at(2);
    cin>>L1.at(3);
    // L1.push_back(7);
    cout<<L1.at(3);
    return 0;
}