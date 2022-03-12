/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 09:48:16
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 09:52:48
 * @FilePath     : 7.10_strgback.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

char * buildstr(char c, int n);                     // prototype

int main(int argc, char const *argv[])
{
    using namespace std;
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;

    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;                                   // free memory

    ps = buildstr('+', 20);                         // reuse pointer
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;                                   // free memory
    return 0;
}


// building string make of n c character
char * buildstr(char c, int n)
{
    char * pstr = new char(n+1);
    pstr[n] = '\0';                                 // terminate string
    while (n-- > 0)
    {
        pstr[n] = c;                                // fill rest of string
    }
    return pstr;
}