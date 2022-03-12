/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 20:22:22
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 20:27:25
 * @FilePath     : ex5.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

using namespace std;

long long fact(unsigned int n);

int main(int argc, char const *argv[])
{
    int number;
    cout << "Enter a number to calculate factorial: ";
    while (cin >> number)
    {
        cout << number << "! = " << fact(number) << endl;
        cout << "Enter a number to calculate factorial: ";
    }
    return 0;
}

long long fact(unsigned int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n-1);
}