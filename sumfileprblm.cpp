#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <array>
#include <stdlib.h>
#include <ctype.h>
#include <bits/stdc++.h>    

using namespace std;

// int getnr(char a[], int i, int j)
// {
//     int counter = 0;
//     char sir[5205];
//     for (int x = i; x < j; x++)
//     {
//         sir[counter] = a[x];
//         counter++;
//     }
//     return atoi(sir);
// }

int main()
{
    fstream MyFile; // declare a file

    MyFile.open("C:\\Wasim\\C++ course\\numbers22.txt", ios::in); // open the file

    long long int sum = 0;
    string line;

    while (getline(MyFile, line)) // reading a line from the file while possible
    {
        sum = sum + stoi(line); // convert string to number and add it to the sum
    }

    MyFile.close(); // closing the file
    ofstream outfile;
    outfile.open("outputfile.txt");
    outfile << "sum is: " << sum; // print the sum

    cin.get();

    return 0;
}

// ifstream f("numbers22.txt"); // taking file as inputstream
// string str;
// if (f)
// {
//     ostringstream ss;
//     ss << f.rdbuf(); // reading data
//     str = ss.str();
// }
// //    cout<<"print the string"<<str;
// // long long int num1 = stoi(str);
// // cout<<num1;
// int n = str.length();

// // declaring character array
// char char_array[n + 1];

// // copying the contents of the
// // string to char array
// strcpy(char_array, str.c_str());

// for (int i = 0; i < n; i++)
//     cout << char_array[i];
// int leng = sizeof(char_array) / sizeof(char_array[0]);
// cout << endl
//      << leng;
// int convertToInteger = atoi(char_array);
// cout << endl
//      << convertToInteger;

// // char char_array[1000];
// int s = 0, inceput, finals;
// cin.getline(char_array, 255);
// for (int i = 0; i < strlen(char_array); i++)
// {
//     if (isdigit(char_array[i]))
//     {
//         if (i == strlen(char_array) - 1)
//         {
//             s += getnr(char_array, i, strlen(char_array));
//         }

//         for (int j = i + 1; j < strlen(char_array); j++)
//         {
//             if (!isdigit(char_array[j]) || j == strlen(char_array) - 1)
//             {
//                 s += getnr(char_array, i, j + 1);
//                 i = j;
//                 break;
//             }
//         }
//     }
// }
// cout << s;
// int sum = 0;
// for (int i = 0; i < leng; i++)
// {
//     sum += char_array[i];
// }
// cout << "The array sum is " << sum;
// return 0;
