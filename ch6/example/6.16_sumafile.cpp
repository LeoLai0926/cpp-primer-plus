/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-27 22:19:25
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-27 22:35:53
 * @FilePath     : 6.16_sumafile.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main(int argc, char const *argv[])
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);

    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating." << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Success open the txt file." << endl;

    double value;
    double sum = 0.0;
    int count = 0;

    while (inFile >> value)
    {
        ++count;
        sum += value;
    }

    if (inFile.eof())
    {
        cout << "End of file reached." << endl;
    }
    else if (inFile.fail())
    {
        cout << "Input terminated by data mismatched." << endl;
    }
    else
    {
        cout << "Input terminated by unknown reason." << endl;
    }

    if (count == 0)
    {
        cout << "No data processed." << endl;
    }
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }

    inFile.close();

    return 0;
}
