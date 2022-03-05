/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-05 08:59:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-05 09:05:48
 * @FilePath     : 7.3_twoarg.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

using namespace std;

void n_chars(char ch, int n);

int main(int argc, char const *argv[])
{

    char ch;
    int times;

    cout << "Enter a character(q to quit): ";
    cin >> ch;
    while (ch != 'q')       // q to quit
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch,times);  // function with two arguments
        cout << endl;
        cout << "Enter a character(q to quit): ";
        cin >> ch;
    }

    cout << "The value of times is " << times << "." << endl;
    cout << "Bye." << endl;

    return 0;
}


void n_chars(char ch, int n)
{
    while (n-- > 0)         // continue until n reaches 0
    {
        cout << ch;
    }
}