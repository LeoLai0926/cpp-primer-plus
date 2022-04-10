/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-10 09:18:51
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-10 23:01:28
 * @FilePath     : dma.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <cstring>
#include "dma.h"

// BaseDMA methods
BaseDMA::BaseDMA(const char * l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

BaseDMA::BaseDMA(const BaseDMA &rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

BaseDMA::~BaseDMA()
{
    delete [] label;
}

BaseDMA &BaseDMA::operator=(const BaseDMA &rs)
{
    if (this == &rs)
    { }
    else
    {
        delete [] label;
        label = new char[std::strlen(rs.label) + 1];
        std::strcpy(label, rs.label);
        rating = rs.rating;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const BaseDMA &rs)
{
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}

// LacksDMA methods
LacksDMA::LacksDMA(const char *c, const char *l, int r)
    : BaseDMA(l, r)
{
    std::strncpy(color, c, COL_LEN-1);
    color[COL_LEN-1] = '\0';
}

LacksDMA::LacksDMA(const char *c, const BaseDMA &rs)
    : BaseDMA(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

std::ostream &operator<<(std::ostream &os, const LacksDMA &ls)
{
    os << (const BaseDMA &) ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}


// HasDMA methods
HasDMA::HasDMA(const char *s, const char *l, int r)
    : BaseDMA(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

HasDMA::HasDMA(const char *s, const BaseDMA &rs)
    : BaseDMA(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

HasDMA::HasDMA(const HasDMA &hs)
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

HasDMA::~HasDMA()
{
    delete [] style;
}

HasDMA &HasDMA::operator=(const HasDMA &hs)
{
    if (this == &hs)
    { }
    else
    {
        BaseDMA::operator=(hs);
        delete [] style;
        style = new char[std::strlen(hs.style) + 1];
        std::strcpy(style, hs.style);
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const HasDMA &hs)
{
    os << (const BaseDMA &) hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}