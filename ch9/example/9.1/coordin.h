/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 23:01:05
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 23:02:13
 * @FilePath     : coordin.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#ifndef __COORDIN_H__
#define __COORDIN_H__

struct Polar
{
    double distance; // distance from origin
    double angle;    // direction from origin
};

struct Rect
{
    double x; // horizontal distance from origin
    double y; // vertical distance from origin
};

// prototypes
Polar rect_to_polar(Rect xypos);
void show_polar(Polar dapos);

#endif // __COORDIN_H__
