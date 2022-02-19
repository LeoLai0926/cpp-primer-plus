/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-19 21:05:16
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-19 21:17:49
 * @FilePath     : 5.13_while.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

const int ArSize = 20;
int main(int argc, char const *argv[])
{
    using namespace std;
    char name[ArSize];
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, vertivalized and ASCIIized: " << endl;
    int i = 0;              // start at beginning of string
    while (name[i] != '\0') // process to end of string
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;                // don't forget this step
    }
    return 0;
}
