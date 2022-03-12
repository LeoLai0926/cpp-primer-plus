/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 10:28:17
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 10:30:54
 * @FilePath     : 7.14_topfive.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>

using namespace std;

const int SIZE=5;

void display(const string sa [], int n);

int main(int argc, char const *argv[])
{
    string list[SIZE];                      // an array holding 5 string object
    cout << "Enter your " << SIZE << " favorite astronomical sights: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";
        getline(cin, list[i]);
    }

    cout << "Your list: " << endl;
    display(list, SIZE);

    return 0;
}


void display(const string sa [], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": " << sa[i] << endl;
    }
}