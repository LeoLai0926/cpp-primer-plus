/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 23:50:33
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 23:55:29
 * @FilePath     : 9.4_auto.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

void oil(int x);

int main(int argc, char const *argv[])
{
    using namespace std;

    int texas = 31;
    int year = 2011;
    cout << "In main(), texas = " << texas << ", &texes = " << &texas << endl;
    cout << "In main(), year = " << year << ", &year = " << &year << endl;

    oil(texas);

    cout << "In main(), texas = " << texas << ", &texes = " << &texas << endl;
    cout << "In main(), year = " << year << ", &year = " << &year << endl;

    return 0;
}

void oil(int x)
{
    using namespace std;
    int texas = 5;

    cout << "In oil(), texas = " << texas << ", &texas = " << &texas << endl;
    cout << "In oil(), x = " << x << ", &x = " << &x << endl;

    {               // start a block
        int texas = 113;
        cout << "In block, texas = " << texas << ", &texas = " << &texas << endl;
        cout << "In block, x = " << x << ", &x = " << &x << endl;
    }               // end a block

    cout << "Post-block texas = " << texas << ", &texas = " << &texas << endl;
}