/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-14 20:43:32
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-14 20:56:56
 * @FilePath     : 8.10_leftover.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);

int main(int argc, char const *argv[])
{
    using namespace std;
    char * trip = "Hawaii!!";           // test value
    unsigned long n = 12345678;         // test value
    int i;
    char * temp;

    for (i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete [] temp;                 // point to temporary storage
    }

    return 0;
}


// This function returns the first ct digits of the number num.
unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if (ct == 0 || num == 0)
    {
        return 0;                       // return 0 is no digits
    }
    while (n /= 10)
    {
        digits++;
    }
    if (digits > ct)
    {
        ct = digits - ct;
        while(ct--)
        {
            num /= 10;
        }
        return num;                     // return left ct digits
    }
    else                                // if ct >= number of digits
    {
        return num;                     // return the whole number
    }
}


// This function returns a pointer to a num string
// consisting of the first n characters in the str string.
char * left(const char * str, int n)
{
    if(n < 0)
    {
        n = 0;
    }
    char *p = new char[n+1];
    int i;
    for(i = 0; i < n && str[i]; i++)
    {
        p[i] = str[i];                  // copy characters
    }
    while (i <= n)
    {
        p[i++] = '\0';                  // set rest of string to '\0'
    }
    return p;
}