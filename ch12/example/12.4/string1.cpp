/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 14:29:20
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 23:24:00
 * @FilePath     : string1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <cstring>
#include "string1.h"

using namespace std;

// initializing static class member

int String::num_strings = 0;

// static method
int String::HowMany()
{
    return num_strings;
}

// constructor methods
String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const char *s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_strings++;
}

String::String(const String &st)
{
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    num_strings++;
}

String::~String()
{
    --num_strings;
    delete [] str;
}

// overload operator methods
String &String::operator=(const String & st)
{
    if (this == &st)
    {
    }
    else
    {
        len = st.len;
        delete [] str;
        str = new char [len + 1];
        strcpy(str, st.str);
    }
    return *this;
}

String &String::operator=(const char * s)
{
    delete [] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}

char &String::operator[](int i)
{
    return str[i];
}

const char &String::operator[](int i) const
{
    return str[i];
}


// overload operator friends
bool operator<(const String &st1, const String &st2)
{
    return (strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return (strcmp(st1.str, st2.str) > 0);
}

bool operator==(const String &st1, const String &st2)
{
    return (strcmp(st1.str, st2.str) == 0);
}

ostream &operator<<(ostream &os, const String &st)
{
    os << st.str;
    return os;
}

istream &operator>>(istream &is, String &st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
    {
        st = temp;
    }
    while (is && is.get() != '\n')
    {
        continue;
    }
    return is;
}


