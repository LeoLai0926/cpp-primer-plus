/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 09:37:50
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 10:31:20
 * @FilePath     : cd.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>
#include "cd.h"

CD::CD(const char *s1, const char *s2, int n, double x)
{
    performers = new char [strlen(s1)+1];
    strcpy(performers, s1);
    label = new char [strlen(s2)+1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

CD::CD(const CD &d)
{
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

CD::CD()
{
    performers = nullptr;
    label = nullptr;
    selections = 0;
    playtime = 0;
}

CD::~CD()
{
    if (performers != nullptr)
    {
        delete [] performers;
    }
    if (label != nullptr)
    {
        delete [] label;
    }
}

void CD::Report() const
{
    std::cout << "Performers: " << performers << std::endl;
    std::cout << "Label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "Playtime: " << playtime << std::endl;
}

CD & CD::operator=(const CD &d)
{
    if (&d == this)
    {
        return *this;
    }
    delete [] performers;
    delete [] label;

    performers = new char [strlen(d.performers)+1];
    strcpy(performers, d.performers);
    label = new char [strlen(d.label)+1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

Classic::Classic()
    : CD()
{
    worker = nullptr;
}

Classic::Classic(const char *s1, const char *s2, const char *s3, int n, double x)
    : CD(s1, s2, n, x)
{
    worker = new char [strlen(s3)+1];
    strcpy(worker, s3);
}

Classic::~Classic()
{
    if (worker != nullptr)
    {
        delete [] worker;
    }
}

void Classic::Report() const
{
    CD::Report();
    std::cout << "Worker: " << worker << std::endl;
}

Classic & Classic::operator=(const Classic &d)
{
    if (&d == this)
    {
        return *this;
    }
    delete [] worker;

    CD::operator=(d);
    worker = new char [strlen(d.worker)+1];
    strcpy(worker, d.worker);

    return *this;
}
