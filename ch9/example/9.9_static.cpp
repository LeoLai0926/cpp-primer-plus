/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 11:13:56
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 11:26:39
 * @FilePath     : 9.9_static.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

// constants
const int ArSize = 10;
// function prototype
void strcount(const char * str);

int main(int argc, char const *argv[])
{
    using namespace std;
    char input[ArSize];
    char next;

    cout << "Enter a line: " << endl;
    cin.get(input, ArSize);
    while (cin)
    {
        cin.get(next);
        while(next != '\n')         // string didn't fit
        {
            cin.get(next);          // dispose of remainder
        }
        strcount(input);
        cout << "Enter next line (empty line to quit): " << endl;
        cin.get(input, ArSize);
    }

    cout << "Bye." << endl;
    return 0;
}

void strcount(const char * str)
{
    using namespace std;
    static int total = 0;           // static local variable
    int count = 0;                  // automatic local variable

    cout << "\"" << str << "\" contains ";
    while (*str++)                  // go to end of string
    {
        count++;
    }
    total += count;

    cout << count << " characters" << endl;
    cout << total << " characters total" << endl;
}




