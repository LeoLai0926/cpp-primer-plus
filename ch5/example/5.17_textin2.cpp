/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-19 22:11:46
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-19 22:17:32
 * @FilePath     : 5.17_textin2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    char ch;
    int count = 0;              // use basic input
    cout << "Enter characters; enter # to quit: " << endl;
    cin.get(ch);                // get a character
    while (ch != '#')           // test the character
    {
        cout << ch;             // echo the character
        ++count;                // count the character
        cin.get(ch);            // get the next character
    }
    cout << endl << count << " characters read" << endl;
    return 0;
}
