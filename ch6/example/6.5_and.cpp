/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 00:40:05
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 00:45:17
 * @FilePath     : 6.5_and.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

const int ArSize = 6;

int main(int argc, char const *argv[])
{
    using namespace std;
    float naaq[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) "
            << "of\nyour neighbors. Program terminates "
            << "when you make\n" << ArSize << " entries "
            << "or enter a negative value." << endl;

    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while (i < ArSize && temp >= 0)     // 2 quitting criteria
    {
        naaq[i] = temp;
        ++i;
        if (i < ArSize)                 // room left in the array
        {
            cout << "Next value: ";
            cin >> temp;                // so get next value
        }
    }
    if (i == 0)
    {
        cout << "No data, bye" << endl;
    }
    else
    {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (naaq[j] > you)
            {
                ++count;
            }
        }
        cout << count;
        cout << " of your neighbors have greater awareness of\n"
            << "the New Age than you do." << endl;
    }

    return 0;
}
