/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 23:41:50
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 23:43:52
 * @FilePath     : plorg.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__PLORG_H__)
#define __PLORG_H__

#include <iostream>

class Plorg
{
private:
    enum { SIZE=20 };
    char name[SIZE];
    int CI;
public:
    Plorg(const char * str = "plorg", int ci = 50);
    void update(int ci);
    void show() const;
};

#endif // __PLORG_H__
