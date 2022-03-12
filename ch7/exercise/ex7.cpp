/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 21:31:16
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 21:43:31
 * @FilePath     : ex7.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

const int Max = 5;

// function prototypes
double * fill_array(double * begin, double * end);
void show_array(double *, double *); // don't change data
void revalue(double, double *, double *);

int main(int argc, char const *argv[])
{
    using namespace std;
    double properties[Max];

    double * pa = fill_array(properties, properties + Max);
    show_array(properties, pa);
    if (pa - properties > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, pa);
        show_array(properties, pa);
    }

    cout << "Done." << endl;
    cin.get();
    cin.get();

    return 0;
}

double * fill_array(double * begin, double * end)
{
    using namespace std;
    double temp;
    double * pt;
    for (pt = begin; pt != end; pt++)
    {
        cout << "Enter value #" << pt - begin + 1 << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; input process terminated." << endl;
            break;
        }
        else if (temp < 0) // signal to terminate
            break;
        *pt = temp;
    }
    return pt;
}

// the following function can use, but not alter
// the array whose address is ar
void show_array(double * begin, double * end)
{
    using namespace std;
    for (double * pt = begin; pt != end; pt++)
    {
        cout << "Property #" << pt - begin + 1 << ": $";
        cout << *pt << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double * begin, double * end)
{
    for (double * pt = begin; pt != end; pt++)
    {
        *pt *= r;
    }
}