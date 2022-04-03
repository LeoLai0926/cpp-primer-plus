/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 14:29:20
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 14:51:32
 * @FilePath     : strngbad.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <cstring>
#include "strngbad.h"

using namespace std;

// initializing static class member
int StringBad::num_strings = 0;

// class methods
// construct StringBad from C string
StringBad::StringBad(const char * s)
{
    len = std::strlen(s);                   // len size
    str = new char [len + 1];               // allot storage
    std::strcpy(str, s);                    // initialize pointer
    num_strings++;                          // set object count
    cout << num_strings << ": \"" << str << "\" object created" <<endl;
                                            // for your information
}

StringBad::StringBad()                      // default constructor
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");                // default string
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default object created" << endl;
                                            // FYI
}

StringBad::~StringBad()                     // necessary destructor
{
    cout << "\"" << str << "\" object deleted, ";
                                            // FYI
    --num_strings;                          // required
    cout << num_strings << " left" << endl; // FYI
    delete [] str;                          // required
}

ostream &operator<<(ostream &os, const StringBad &st)
{
    os << st.str;
    return os;
}