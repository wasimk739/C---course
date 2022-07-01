#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void addRow(double row[60], istringstream& stream, int& col)
{
    double x;
    col = 0;

    while(stream >> x) 
    {
        row[col] += x;
        col++;
    }
}

int main()
{
    int row = 0;
    int col = 0;
    string line;
    int firstNb = 0;
    double array[100][100], rowtotal[100] = {0}, columntotal[100]={0};
    ofstream File;
    ifstream in("numbers22.txt");
    File.open("extracted_data.txt",ios::app);
    File.setf(ios::fixed);
    File.setf(ios::showpoint);
    File.precision(3);

    if(in.fail()) 
    {
        cerr << " File can not be opened ";
        return -1;
    }

    File << "\n" << endl;
    while(in.good()) 
    {
        while(getline(in, line)) 
        {            
            istringstream stream(line);
            firstNb = atoi(line.c_str());
            if (firstNb == 50 || firstNb == 16)
                addRow(array[row], stream, col);

            if (firstNb == 16)
                row++;
        }
    }

    File << "number of rows  --> " << row << endl;
    File << "number of cols --> " << col << endl;
    File << " " << endl;

    for(int i=0; i < row; i++) 
    {
        for(int j=0; j < col; j++) 
        {
            File << array[i][j] << " ";
        }
        File << "\n" << endl;
    }


    for(int i=0; i < 51; i++)
    {  
        for (int j=1; j < 101; j++) 
        {
            rowtotal[i] = rowtotal[i] + array[i][j];
        }
    }

    for(int i = 0; i < 51; i++)
    { 
        File << "sum of each row: " << rowtotal[i] << endl;
    }

    File.close();
    in.close();
    return 0;
}