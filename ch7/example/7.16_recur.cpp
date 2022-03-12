/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 11:02:27
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 11:06:30
 * @FilePath     : 7.16_recur.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

void countdown(int n);

int main(int argc, char const *argv[])
{
    countdown(4);                           // call the recursive function
    return 0;
}

void countdown(int n)
{
    using namespace std;
    cout << "Counting down ... " << n << "\t (n at " << &n << ")" << endl;
    if (n > 0)
    {
        countdown(n-1);                     // function calls itself
    }
    cout << n << ": Kaboom!" << "\t\t (n at " << &n << ")" << endl;
}
