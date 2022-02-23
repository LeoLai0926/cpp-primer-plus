/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 21:42:49
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 21:47:06
 * @FilePath     : 6.8_cctypes.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cctype>                       // prototype for character functions

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "Enter text for analysis, and type @"
            " to terminate input." << endl;

    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);                        // get first character
    while (ch != '@')                   // test for sentinel
    {
        if (isalpha(ch))                // is it an alphabetic character?
            chars++;
        else if (isspace(ch))           // is it a whitespace character?
            whitespace++;
        else if (isdigit(ch))           // is it a digit?
            digits++;
        else if (ispunct(ch))           // is it punctuation?
            punct++;
        else
            others++;
        cin.get(ch);                    // get next character
    }

    cout << chars << " letters, "
            << whitespace << " whitespace, "
            << digits << " digits, "
            << punct << " punctuations, "
            << others << " others." << endl;

    return 0;
}
