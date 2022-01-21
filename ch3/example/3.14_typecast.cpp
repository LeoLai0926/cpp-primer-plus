/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-21 22:28:54
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-21 22:38:31
 * @FilePath     : 3.14_typecast.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int auks, bats, coots;

    // the following statements adds the values as double
    // then converts the result to int
    auks = 19.99 + 11.99;

    // these statements add values as int
    bats = (int) 19.99 + (int) 11.99;       // old C syntax
    coots = int (19.99) + int (11.99);      // new C++ syntax
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";        // print as char
    cout << int(ch) << endl;                        // print as int
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;           // using static_case
    return 0;
}
