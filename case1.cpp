#include <iostream>
#include <fstream>
using namespace std;

int main() {
    unsigned int positiveInteger;
    cout << "Please input an integer up to 100." << endl;
    cin >> positiveInteger;

    cout << (positiveInteger * (positiveInteger + 1)) / 2;
    return 0;
}