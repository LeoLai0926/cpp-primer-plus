/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-13 00:16:47
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-13 00:22:16
 * @FilePath     : 4.19_addpntrs.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    double wages [3] = {10000.0, 20000.0, 30000.0};
    short stacks [3] = {3, 2, 1};

    // Here are two ways to get the address of an array
    double * pw = wages;        // name of an array = address
    short * ps = &stacks[0];    // or use addres operator with array element

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:" << endl;
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    cout << endl;

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer: " << endl;
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    cout << endl;

    cout << "access two elements with array notation" << endl;
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation" << endl;
    cout << "stacks = " << stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = size of wages array" << endl;
    cout << sizeof(pw) << " = size of pw pointer" << endl;

    return 0;
}
