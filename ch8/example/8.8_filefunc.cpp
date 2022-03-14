/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-14 17:44:11
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-14 17:52:28
 * @FilePath     : 8.8_filefunc.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream &os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main(int argc, char const *argv[])
{
    ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        cout << "Can't open " << fn << ", Bye." << endl;
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "Enter the focal length of your "
            "telescope objective in mm: ";
    cin >> objective;
    double eps[LIMIT];
    cout << "Enter the focal lengths in mm, of " << LIMIT
         << " eyepieces: " << endl;
    for (int i = 0; i < LIMIT; i++)
    {
        cout << "Eyepiece #" << i+1 << ": ";
        cin >> eps[i];
    }

    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "Done." << endl;

    return 0;
}

void file_it(ostream &os, double fo, const double fe[], int n)
{
    ios::ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed);         // save initial formatting state
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm" << endl;
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(12);
    os << "f.l. eyepiece";
    os.width(5);
    os << "magnification" << endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int(fo / fe[i] + 0.5) << endl;
    }
    os.setf(initial);                           // restore initial formatting state
}
