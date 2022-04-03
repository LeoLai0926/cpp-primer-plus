/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 14:44:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 23:32:18
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

using namespace std;

int main(int argc, char const *argv[])
{
    String name;
    cout << "Hi, What's your name?" << endl << ">>";
    cin >> name;

    cout << name << ", please enter up to " << ArSize
        << " short sayings <empty line to quit>: " << endl;
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << "#" << i+1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
        {
            continue;
        }
        if (!cin || temp[0] == '\0')
        {
            break;
        }
        else
        {
            sayings[i] = temp;
        }
    }

    int total = i;

    if (total > 0)
    {
        cout << "Here are your sayings: " << endl;
        for (i = 0; i < total; i++)
        {
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        }

        int shortest = 0;
        int first = 0;
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < sayings[shortest].length())
            {
                shortest = i;
            }
            if (sayings[i] < sayings[first])
            {
                first = i;
            }
        }

        cout << "Shortest sayings: " << endl << sayings[shortest] << endl;
        cout << "First alphabetically: " << endl << sayings[first] << endl;
        cout << "This program used " << String::HowMany() << " string objects. Bye." << endl;
    }
    else
    {
        cout << "No input. Bye." << endl;
    }

    return 0;
}
