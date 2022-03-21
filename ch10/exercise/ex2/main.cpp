/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 21:47:52
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 21:48:56
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "person.h"

int main(int argc, char const *argv[])
{
    Person one;                 // use default constructor
    Person two("Smythecraft");  // use #2 with one default argument
    Person three("Dimwiddy", "Sam");    // use #2, no defaults

    three.show();
    cout << endl;

    three.formalShow();
    cout << endl;
    return 0;
}
