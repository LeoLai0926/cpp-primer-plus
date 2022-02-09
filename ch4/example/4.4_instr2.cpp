/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-10 01:03:53
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-10 01:11:03
 * @FilePath     : 4.4_instr2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: " << endl;
    cin.getline(name, ArSize);      // read through newline
    cout << "Enter your favorite dessert: " << endl;
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you " << name << "." << endl;
    return 0;
}
