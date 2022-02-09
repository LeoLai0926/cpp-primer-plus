/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-10 01:18:02
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-10 01:26:15
 * @FilePath     : 4.6_numstr.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "What year was your house built?" << endl;
    int year;
    cin >> year;
    cin.get();
    cout << "What is its street address?" << endl;
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done." << endl;
    return 0;
}

