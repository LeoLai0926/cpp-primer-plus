/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 19:51:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 19:54:27
 * @FilePath     : ex1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    int num1, num2;
    cout << "Enter a smaller integer: ";
    cin >> num1;
    cout << "Enter another bigger integer: ";
    cin >> num2;

    int sum = 0;
    for (int i = num1; i <= num2; i++)
    {
        sum += i;
    }

    cout << "Sum of integers between " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
