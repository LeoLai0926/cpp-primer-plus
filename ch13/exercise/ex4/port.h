/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 11:36:01
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 19:55:44
 * @FilePath     : port.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__PORT_H__)
#define __PORT_H__

#include <iostream>

class Port
{
private:
    char * brand;
    char style[20];
    int bottles;
public:
    Port(const char * br = "none", const char * st = "none", int b = 0);
    Port(const Port & p);
    virtual ~Port();
    Port & operator=(const Port & p);
    Port & operator+=(int b);
    Port & operator-=(int b);
    int BottleCount() const { return bottles; }
    virtual void Show() const;
    friend std::ostream & operator<<(std::ostream & os, const Port & p);
};


class VintagePort : public Port
{
private:
    char * nickname;
    int year;
public:
    VintagePort();
    VintagePort(const char *br, const char *st, int b, const char *nn, int y);
    VintagePort(const VintagePort &vp);
    ~VintagePort();
    VintagePort & operator=(const VintagePort & vp);
    void Show() const;
    friend std::ostream & operator<<(std::ostream & os, const VintagePort & vp);
};

#endif // __PORT_H__
