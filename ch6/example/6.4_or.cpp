/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 00:34:30
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 00:37:50
 * @FilePath     : 6.4_or.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "This program may reformat your hard disk" << endl
        << "and destroy all your data." << endl
        << "Do you wish to continue? <y/n> ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')             // y or Y
        cout << "You were warned!\a\a\n";
    else if (ch == 'n' || ch == 'N')
        cout << "A wise choice ... bye\n";
    else
        cout << "That wasn't a y or n! Apparently you "
                "can't follow\ninstructions, so "
                "I'll trash your disk anyway.\a\a\a\n";
    return 0;
}
