/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-27 23:24:28
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-27 23:33:02
 * @FilePath     : ex1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <cctype>

int main(int argc, char const *argv[])
{
    using namespace std;
    char ch;
    while (cin.get(ch) && ch != '@')
    {
        if (isdigit(ch))
        {
            cin.get();
            continue;
        }
        else if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        cin.get();
        cout << ch << endl;
    }
    return 0;
}
