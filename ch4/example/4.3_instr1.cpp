/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-09 14:14:11
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-09 14:16:35
 * @FilePath     : 4.3_instr1.cpp
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
    cin >> name;
    cout << "Enter your favorite dessert: " << endl;
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << endl;

    return 0;
}
