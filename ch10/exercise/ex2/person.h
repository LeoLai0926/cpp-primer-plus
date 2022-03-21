/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 21:41:38
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 21:50:28
 * @FilePath     : person.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__PERSON_H__)
#define __PERSON_H__

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    static const int LIMIT = 25;
    string lname;               // Person's last name
    char fname[LIMIT];          // Person's first name
public:
    Person() {lname = "", fname[0] = '\0'; }            // 1
    Person(const string & ln, const char * fn = "");    // 2
    // the following methods display lname and fname
    void show() const;          // firstname lastname format
    void formalShow() const;    // lastname, firstname format
};

#endif // __PERSON_H__
