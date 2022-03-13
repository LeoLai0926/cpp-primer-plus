/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-14 03:01:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-14 03:03:14
 * @FilePath     : 8.2_firstref.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;               // rodents is a reference
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    // some implementations require type casting the following
    // address to type unsigned
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}
