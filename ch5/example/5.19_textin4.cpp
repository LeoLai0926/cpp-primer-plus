/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-21 20:33:30
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-21 20:34:52
 * @FilePath     : 5.19_textin4.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int ch;                     // should be int, not char
    int count = 0;

    while ((ch = cin.get()) != EOF)     // test for end-of-file
    {
        cout.put(char(ch));
        ++count;
    }

    cout << endl << count << " characters read." << endl;

    return 0;
}
