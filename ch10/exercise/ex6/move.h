/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 23:28:16
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 23:29:19
 * @FilePath     : move.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__MOVE_H__)
#define __MOVE_H__

#include <iostream>

class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0.0, double b = 0.0);
    void show() const;
    Move add(const Move &m);
    void reset(double a = 0.0, double b = 0.0);
};

#endif // __MOVE_H__
