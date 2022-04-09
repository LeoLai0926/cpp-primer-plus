/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 00:46:35
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-09 10:54:48
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "stack.h"

using namespace std;

const int MAX = 5;

int main(int argc, char const *argv[])
{

    Stack st(MAX);
    Item item;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Enter a number you want to push: " << endl;
        cin >> item;
        while (cin.get() != '\n');
        st.push(item);
    }

    Stack st_new(st);
    for (int i = 0; i < MAX; i++)
    {
        st_new.pop(item);
        cout << item << " is poped." << endl;
    }

    return 0;
}
