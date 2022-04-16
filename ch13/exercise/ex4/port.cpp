/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 17:28:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 20:04:39
 * @FilePath     : port.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <cstring>
#include "port.h"

using namespace std;

Port::Port(const char *br, const char *st, int b)
    : bottles(b)
{
    brand = new char [strlen(br) + 1];
    strcpy(brand, br);
    strncpy(style, st, 20);
    if (strlen(st) >= 20)
    {
        style[20-1] = '\0';
    }
    else
    {
        style[strlen(st)] = '\0';
    }
}

Port::Port(const Port &p)
    : bottles(p.bottles)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strncpy(style, p.style, 20);
    if (strlen(p.style) >= 20)
    {
        style[20 - 1] = '\0';
    }
    else
    {
        style[strlen(p.style)] = '\0';
    }
}

Port::~Port()
{
    if (brand != nullptr)
    {
        delete [] brand;
    }
}

Port &Port::operator=(const Port &p)
{
    if (this == &p)
    {
        return *this;
    }

    delete [] brand;
    strcpy(brand, p.brand);
    strncpy(style, p.style, 20);
    if (strlen(p.style) >= 20)
    {
        style[20 - 1] = '\0';
    }
    else
    {
        style[strlen(p.style)] = '\0';
    }

    bottles = p.bottles;

    return *this;
}

Port &Port::operator+=(int b)
{
    bottles += b;
    return *this;
}

Port &Port::operator-=(int b)
{
    bottles -= b;
    return *this;
}

void Port::Show() const
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Kind: " << style << std::endl;
    std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Port &p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}



// VintagePort methods

VintagePort::VintagePort() : Port(), nickname(nullptr), year(0) {}

VintagePort::VintagePort(const char *br, const char * st, int b, const char *nn, int y)
    : Port(br, st, b), year(y)
{
    nickname = new char [strlen(nn)+1];
    strcpy(nickname, nn);
}

VintagePort::VintagePort(const VintagePort &vp)
    : Port(vp), year(vp.year)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
}

VintagePort::~VintagePort()
{
    if (nickname != nullptr)
    {
        delete [] nickname;
    }
}

VintagePort &VintagePort::operator=(const VintagePort &vp)
{
    if (this == &vp)
    {
        return *this;
    }

    Port::operator=(vp);
    delete [] nickname;
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);
    year = vp.year;

    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Year: " << year << std::endl;
}

std::ostream &operator<<(std::ostream &os, const VintagePort &vp)
{
    os << (const Port &) vp << ", " << vp.nickname << ", " << vp.year;
    return os;
}