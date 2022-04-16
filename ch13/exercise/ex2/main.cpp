/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 09:27:00
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 10:16:44
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "cd.h"

using namespace std;

void Bravo(const CD & disk);

int main(int argc, char const *argv[])
{
    CD c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
                            "Alfred Brendel", "Philips", 2, 57.17);
    CD *pcd = &c1;

    cout << "Using object directly: " << endl;
    c1.Report();                // use CD method
    c2.Report();                // use Classic method

    cout << "Using type cd * pointer to object: "  << endl;
    pcd->Report();              // use CD method for CD object
    pcd = &c2;
    pcd->Report();              // use Classic method for classic object

    cout << "Calling a function with a CD reference argument: " << endl;
    Bravo(c1);
    Bravo(c2);

    cout << "Tesing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}


void Bravo(const CD & disk)
{
    disk.Report();
}

