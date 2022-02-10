/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-10 15:15:16
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-10 15:18:48
 * @FilePath     : 4.10_strtype4.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>           // make string class avaiable
#include <cstring>          // C-style string library

int main(int argc, char const *argv[])
{
    using namespace std;

    char charr[20];
    string str;

    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before input: " << str.size() << endl;
    cout << "Enter a line of text: " << endl;
    cin.getline(charr, 20);         // indicate maximum length
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text: " << endl;
    getline(cin, str);              // cin now an argument; no length specifier
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in str after input: " << str.size() << endl;

    return 0;
}


