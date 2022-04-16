/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 09:37:50
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 10:16:40
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
    strncpy(performers, s1, LongStrSize);
    if (strlen(s1) >= LongStrSize)
    {
        performers[LongStrSize-1] = '\0';
    }
    else
    {
        performers[strlen(s1)] = '\0';
    }

    strncpy(label, s2, ShrtStrSize);
    if (strlen(s2) >= ShrtStrSize)
    {
        label[ShrtStrSize-1] = '\0';
    }
    else
    {
        label[strlen(s2)] = '\0';
    }
    selections = n;
    playtime = x;
}

CD::CD(const CD &d)
{
    strncpy(performers, d.performers, LongStrSize);
    strncpy(label, d.label, ShrtStrSize);
    selections = d.selections;
    playtime = d.playtime;
}

CD::CD()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
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

    strncpy(performers, d.performers, LongStrSize);
    strncpy(label, d.label, ShrtStrSize);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

Classic::Classic()
    : CD()
{
    worker[0] = '\0';
}

Classic::Classic(const char *s1, const char *s2, const char *s3, int n, double x)
    : CD(s1, s2, n, x)
{
    strncpy(worker, s3, ShrtStrSize);
    if (strlen(s3) >= ShrtStrSize)
    {
        worker[ShrtStrSize-1] = '\0';
    }
    else
    {
        worker[strlen(s3)] = '\0';
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

    CD::operator=(d);

    strcpy(worker, d.worker);

    return *this;
}
