/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-14 10:25:25
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-14 10:31:48
 * @FilePath     : 8.4_swaps.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

void swapr(int & a, int & b);               // a, b are aliases for ints
void swapp(int * p, int * q);               // p, q are addresses of ints;
void swapv(int a, int b);                   // a, b are new variable

int main(int argc, char const *argv[])
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using references to swap to contents: " << endl;
    swapr(wallet1, wallet2);                // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using pointers to swap to contents: " << endl;
    swapp(&wallet1, &wallet2);              // pass addresses of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Try to use passing by value: " << endl;
    swapv(wallet1, wallet2);                // pass values of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    return 0;
}

void swapr(int &a, int &b)
{
    int temp;
    temp = a;               // use a, b for values of variables
    a = b;
    b = temp;
}

void swapp(int *p, int *q)
{
    int temp;

    temp = *p;              // use *p, *q for values of variables
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)
{
    int temp;
    temp = a;               // use a, b for values of variables;
    a = b;
    b = temp;
}

