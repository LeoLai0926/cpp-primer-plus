/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-14 18:04:14
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-14 18:15:04
 * @FilePath     : 8.9_left.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

const int ArSize = 80;

char * left(const char * str, int n = 1);

int main(int argc, char const *argv[])
{
    using namespace std;
    char sample[ArSize];
    cout << "Enter a string: " << endl;
    cin.get(sample, ArSize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete [] ps;                   // free old string

    ps = left(sample);
    cout << ps << endl;
    delete [] ps;                   // free new string
    return 0;
}


// This function returns a pointer to a new string
// consisting of the first characters in the str string
char * left(const char * str, int n)
{
    if (n < 0)
    {
        n = 0;
    }
    char *p = new char[n+1];
    int i;
    for (i = 0; i < n && str[i]; i++)
    {
        p[i] = str[i];              // copy characters
    }
    while (i <= n)
    {
        p[i++] = '\0';              // set rest of string to '\0'
    }
    return p;
}