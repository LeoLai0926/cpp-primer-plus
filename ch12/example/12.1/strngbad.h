/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 13:23:14
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 14:51:25
 * @FilePath     : strngbad.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__STRNGBAD_H__)
#define __STRNGBAD_H__

#include <iostream>

class StringBad
{
private:
    char * str;             // pointer to string
    int len;                // length of string
    static int num_strings; // number of objects;
public:
    StringBad(const char * s);  // constructor
    StringBad();                // default constructor
    ~StringBad();               // destructor
// friend function
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};

#endif // __STRNGBAD_H__
