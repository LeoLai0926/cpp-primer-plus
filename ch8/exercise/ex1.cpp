/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 11:33:10
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 16:11:37
 * @FilePath     : ex1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

void show(const char * string, int n=0);

int main(int argc, char const *argv[])
{
    show("First sentence.");
    show("Second sentence.");
    show("Test.", 2);
    return 0;
}

void show(const char *string, int n)
{
    using namespace std;
    static int num = 0;
    num++;
    if (n == 0)
    {
        cout << string << endl;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            cout << string << endl;
        }
    }
}
