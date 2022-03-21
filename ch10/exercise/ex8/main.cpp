/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 19:55:06
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-22 00:06:08
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "list.h"

using namespace std;

void visit_item(Item &item);

int main(int argc, char const *argv[])
{
    List list;
    Item num;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> num;
        list.add(num);
    }
    list.visit(&visit_item);

    return 0;
}

void visit_item(Item &item)
{
    cout << "Item " << item << endl;
}