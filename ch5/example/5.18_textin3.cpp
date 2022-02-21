/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-21 20:09:32
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-21 20:17:32
 * @FilePath     : 5.18_textin3.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);                // attempt to read a char
    while (cin.fail() == false) // test for EOF
    {
        cout << ch;             // echo character
        ++count;
        cin.get(ch);            // attempt to read another char
    }

    cout << endl << count << " characters read." << endl;
    return 0;
}
