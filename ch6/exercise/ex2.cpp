/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-27 23:34:10
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-27 23:46:29
 * @FilePath     : ex2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <array>
#include <cctype>

const int ArSize = 10;

int main(int argc, char const *argv[])
{
    using namespace std;
    array<double, ArSize> donation;
    double input;
    int count = 0;
    double sum = 0.0;
    double average;
    int bigger = 0;

    cout << "Enter the donation value: ";
    while (cin >> input)
    {
        donation[count++] = input;
        if (count == 10)
            break;
        cout << "Enter the donation value: ";

    }

    for (int i = 0; i < count; i++)
    {
        sum += donation[i];
    }

    average = sum / count;

    for (int i = 0; i < count; i ++)
    {
        if (donation[i] > average)
            bigger++;
    }

    cout << "Average is: " << average << endl;
    cout << bigger << " numbers are bigger than average." << endl;

    return 0;
}
