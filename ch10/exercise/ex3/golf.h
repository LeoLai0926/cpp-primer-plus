/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 15:48:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 22:46:15
 * @FilePath     : golf.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__GOLF_H__)
#define __GOLF_H__

#include <iostream>
#include <string>

class Golf
{
private:
    std::string fullname;
    int handicap;
public:
    Golf();
    Golf(const char *name, int hc);
    void setHandicap(Golf &g, int hc);
    void show() const;
};

#endif // __GOLF_H__
