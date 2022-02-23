/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 00:11:49
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 00:13:22
 * @FilePath     : 6.1_if.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;                // using declarations
    char ch;
    int spaces = 0;
    int total = 0;

    cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ')                  // check if ch is a space
        {
            ++spaces;
        }
        ++total;                        // done every time
        cin.get(ch);
    }

    cout << spaces << " spaces, " << total;
    cout << " characters total in sentences." << endl;

    return 0;
}
