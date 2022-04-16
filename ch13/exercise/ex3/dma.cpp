/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-10 09:18:51
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 11:30:52
 * @FilePath     : dma.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <cstring>
#include "dma.h"

ABC::ABC()
{
    label = nullptr;
    rating = 0;
}

ABC::ABC(const char *l, int r)
    : rating(r)
{
    label = new char [strlen(l)+1];
    strcpy(label, l);
}

ABC::ABC(const ABC &abc)
    : rating(abc.rating)
{
    label = new char[strlen(abc.label) + 1];
    strcpy(label, abc.label);
}

ABC::~ABC()
{
    if (label != nullptr)
    {
        delete [] label;
    }
}


ABC &ABC::operator=(const ABC &abc)
{
    if (this == &abc)
    {
        return *this;
    }

    delete [] label;
    label = new char[strlen(abc.label) + 1];
    strcpy(label, abc.label);
    rating = abc.rating;

    return *this;
}

std::ostream &operator<<(std::ostream &os, const ABC &abc)
{
    os << "Label: " << abc.label << std::endl;
    os << "Rating: " << abc.rating << std::endl;
    return os;
}

// LacksDMA methods

LacksDMA::LacksDMA(const char *c, const char *l, int r)
    : ABC(l, r)
{
    strncpy(color, c, COL_LEN);
    if (strlen(c) >= COL_LEN)
    {
        color[COL_LEN-1] = '\0';
    }
    else
    {
        color[strlen(c)] = '\0';
    }
}

LacksDMA::LacksDMA(const char *c, const BaseDMA &rs)
    : ABC(rs)
{
    strncpy(color, c, COL_LEN);
    if (strlen(c) >= COL_LEN)
    {
        color[COL_LEN - 1] = '\0';
    }
    else
    {
        color[strlen(c)] = '\0';
    }
}

std::ostream &operator<<(std::ostream &os, const LacksDMA &ls)
{
    os << (const ABC &) ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}

// HasDMA methods

HasDMA::HasDMA(const char *s, const char *l, int r)
    : ABC(l, r)
{
    style = new char [strlen(s)+1];
    strcpy(style, s);
}

HasDMA::HasDMA(const char *s, const BaseDMA &rs)
    : ABC(rs)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

HasDMA::HasDMA(const HasDMA &hs)
{
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
}

HasDMA::~HasDMA()
{
    if (style != nullptr)
    {
        delete [] style;
    }
}

HasDMA &HasDMA::operator=(const HasDMA &hs)
{
    if (this == &hs)
    {
        return *this;
    }

    delete [] style;
    ABC::operator=(hs);
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);

    return *this;
}

std::ostream &operator<<(std::ostream &os, const HasDMA &hs)
{
    os << (const ABC &)hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}
