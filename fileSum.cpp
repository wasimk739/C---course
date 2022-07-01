#include <iostream>
#include <fstream>

using namespace std;

int add(int x, int y)
{
    return (x + y);
}

int product(int a, int b)
{
    return (a * b);
}

int main()
{
    ofstream myfile("solve.txt");
    int values[2];
    cout << "\n\n";
    cout << "\t\tProduct and Sum of Two Numbers Using Text File in C++";
    cout << "\n\n";
    cout << "Enter two numbers :=> ";
    cin >> values[0] >> values[1];
    cout << "\n";
    cout << "\nThe product of "
         << values[0] << " and "
         << values[1] << " is "
         << product(values[0], values[1])
         << ".";
    cout << "\nThe sum of "
         << values[0] << " and "
         << values[1] << " is "
         << add(values[0], values[1])
         << ".";
    cout << "\n\n";
    cout << "Data has been saved in solve.txt";
    cout << "\n\n";
    myfile << "\n======================";
    myfile << "\n   Resulted Values ";
    myfile << "\n======================";
    myfile << "\n";
    myfile << "\nThe product of "
           << values[0] << " and "
           << values[1] << " is "
           << product(values[0], values[1])
           << ".";
    myfile << "\nThe sum of "
           << values[0] << " and "
           << values[1] << " is "
           << add(values[0], values[1])
           << ".";
    myfile << "\n\n";
    myfile.close();
    system("pause");
}