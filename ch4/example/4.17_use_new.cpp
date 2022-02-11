/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-11 20:30:02
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-11 20:55:39
 * @FilePath     : 4.17_use_new.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;         // allocate space for an int
    *pt = 1001;

    cout << "nights value = " << nights << ": location " << &nights << endl;
    cout << "int value" << *pt << ": location " << pt << endl;

    double * pd = new double;   // allocate space for a double
    *pd = 10000001.0;           // store a double there

    cout << "double value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;

    cout << "size of pt = " << sizeof(pt) << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd) << ": size of *pd = " << sizeof(*pd) << endl;
    return 0;
}
