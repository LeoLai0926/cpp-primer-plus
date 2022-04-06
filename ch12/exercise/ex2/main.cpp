/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 14:44:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-06 23:56:12
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "string2.h"

using namespace std;

int main(int argc, char const *argv[])
{
    String s1(" and I am a C++ student.");
    String s2 = "Please enter your name: ";
    String s3;
    cout << s2;
    cin >> s3;
    s2 = "My name is " + s3;
    cout << s2 << "." << endl;
    s2 = s2 + s1;
    s2.Stringup();
    cout << "The string" << endl << s2 << endl << "contains " << s2.count('A')
        << " 'A' characters in it." << endl;
    s1 = "red";

    String rgb[3] = { String(s1), String("green"), String("blue")};
    cout << "Enter the name of a primary color for mixing light: ";
    String ans;
    bool success = false;
    while (cin >> ans)
    {
        ans.Stringlow();
        for (int i = 0; i < 3; i++)
        {
            if (ans == rgb[i])
            {
                cout << "That's right!" << endl;
                success = true;
                break;
            }
        }
        if (success)
        {
            break;
        }
        else
        {
            cout << "Try again!" << endl;
        }
    }
    cout << "Bye." << endl;
    return 0;
}
