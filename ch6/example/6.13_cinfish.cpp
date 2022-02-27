/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-27 21:01:39
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-27 21:05:20
 * @FilePath     : 6.13_cinfish.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

const int Max = 5;

int main(int argc, char const *argv[])
{
    using namespace std;
    // get data
    double fish[Max];
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << Max << " fish <q to terminate>." << endl;
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i])
    {
        if (++i < Max)
            cout << "fish #" << i+1 << ": ";
    }

    // calculate average
    double total = 0.0;
    for (int j = 0; j < i; j ++)
    {
        total += fish[j];
    }
    // report results
    if (i == 0)
    {
        cout << "No fish" << endl;
    }
    else
    {
        cout << total / i << " = average weight of " << i << " fish" << endl;
    }
    cout << "Done." << endl;

    return 0;
}
