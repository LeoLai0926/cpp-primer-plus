/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-10 09:12:34
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 11:20:04
 * @FilePath     : dma.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__DMA_H__)
#define __DMA_H__

#include <iostream>


class ABC
{
private:
    char * label;
    int rating;
public:
    ABC();
    ABC(const char * l, int r);
    ABC(const ABC & abc);
    virtual ~ABC();

    ABC & operator=(const ABC & abc);
    friend std::ostream & operator<<(std::ostream & os, const ABC & abc);
};



// Base Class Using DMA
class BaseDMA : public ABC
{
public:
    BaseDMA(const char * l = "null", int r = 0) : ABC(l, r) {}
    BaseDMA(const BaseDMA & rs) : ABC(rs) {}
};


class LacksDMA : public ABC
{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    LacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
    LacksDMA(const char * c, const BaseDMA & rs);
    friend std::ostream &operator<<(std::ostream &os, const LacksDMA &ls);
};


class HasDMA : public ABC
{
private:
    char * style;
public:
    HasDMA(const char * s = "none", const char * l = "null", int r = 0);
    HasDMA(const char * s, const BaseDMA & rs);
    HasDMA(const HasDMA & hs);
    virtual ~HasDMA();
    HasDMA & operator=(const HasDMA & hs);
    friend std::ostream &operator<<(std::ostream &os, const HasDMA &hs);
};



#endif // __DMA_H__
