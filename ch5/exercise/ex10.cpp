/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 21:21:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 21:24:55
 * @FilePath     : ex10.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int lines;
    cout << "Enter lines: ";
    cin >> lines;
    cin.get();

    for (int i = 1; i < lines + 1; i++)
    {
        for (int j = 0; j < lines - i; j++)
        {
            cout << ".";
        }
        for (int j=  0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
