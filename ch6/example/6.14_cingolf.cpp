/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-27 21:07:10
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-27 21:11:09
 * @FilePath     : 6.14_cingolf.cpp
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
    int golf[Max];
    cout << "Please enter your gold scores." << endl;
    cout << "You must enter " << Max << " rounds." << endl;
    int i;
    for(i = 0; i < Max; i++)
    {
        cout << "round #" << i+1 << ": ";
        while (!(cin >> golf[i]))
        {
            cin.clear();                // reset input
            while ( cin.get() != '\n')
            {
                continue;               // get rid of bad input
            }
            cout << "Please enter a number: ";
        }
    }

    // calculate average
    double total = 0.0;
    for (i = 0; i < Max; i++)
    {
        total += golf[i];
    }

    // report results
    cout << total / Max << " average score " << Max << " rounds" << endl;
    return 0;
}
