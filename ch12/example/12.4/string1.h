/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 13:23:14
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 23:23:00
 * @FilePath     : string1.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__STRING1_H__)
#define __STRING1_H__

#include <iostream>

using namespace std;

class String
{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    // constructor
    String();
    String(const char * s);
    String(const String & st);
    ~String();

    // other methods
    int length() const { return len; }

    // overload operator methods
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;

    // overload operator friends
    friend bool operator<(const String & st1, const String & st2);
    friend bool operator>(const String & st1, const String & st2);
    friend bool operator==(const String & st1, const String & st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);

    // static function
    static int HowMany();
};

#endif // __STRING1_H__
