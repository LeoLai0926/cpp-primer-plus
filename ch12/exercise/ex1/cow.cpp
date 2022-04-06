/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-06 19:45:44
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-06 20:50:43
 * @FilePath     : cow.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>
#include "cow.h"

using namespace std;

Cow::Cow()
{
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    strlcpy(name, nm, 19);
    hobby = new char [strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c)
{
    strlcpy(name, c.name, 19);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
    if (&c == this)
    {
    }
    else
    {
        strlcpy(name, c.name, 19);
        hobby = new char [strlen(c.hobby) + 1];
        strcpy(hobby, c.hobby);
        weight = c.weight;
    }
    return *this;
}

void Cow::ShowCow() const
{
    cout << "Name: " << name << endl;
    cout << "Hobby: ";
    if (hobby == nullptr)
    {
        cout << endl;
    }
    else
    {
        cout << hobby << endl;
    }
    cout << "Weight: " << weight << endl;
}



