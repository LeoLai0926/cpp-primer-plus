/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 23:28:16
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 23:34:14
 * @FilePath     : move.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::show() const
{
    using namespace std;
    cout << "x = " << x << ", y = " << y << endl;
}

Move Move::add(const Move &m)
{
    x += m.x;
    y += m.y;
    return *this;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
