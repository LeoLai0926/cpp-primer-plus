/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-10 23:55:23
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-11 00:00:02
 * @FilePath     : 7.9_strgfun.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

unsigned int c_in_str(const char * str, char ch);

int main(int argc, char const *argv[])
{
    using namespace std;
    char mmm[15] = "minmum";            // string in an array
    //some systems requires preceding char with static to
    // enable array initialization

    char * wail = "ululate";            // wail points to string
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    return 0;
}

// this function counts the number of ch characters
// in the string str

unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;
    while (*str)                        // quit when *str is '\0'
    {
        if (*str == ch)
        {
            count ++;
        }
        str++;                          // move pointer to next char
    }
    return count;
}
