/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 21:32:50
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 21:35:30
 * @FilePath     : 6.7_not.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <climits>

bool is_int(double);

int main(int argc, char const *argv[])
{
    using namespace std;
    double num;

    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num))            // continue while sum is not int-able
    {
        cout << "Out of range, please try again: ";
        cin >> num;
    }

    int val = int (num);            // type cast
    cout << "You've entered the integer " << val << endl << "Bye" << endl;
    return 0;
}


bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)       // use climits values
    {
        return true;
    }
    else
    {
        return false;
    }
}
