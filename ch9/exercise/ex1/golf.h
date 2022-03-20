/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 15:48:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 17:16:59
 * @FilePath     : golf.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__GOLF_H__)
#define __GOLF_H__

const int Len = 40;

struct golf
{
    char fullname[Len];
    int handicap;
};

void setgolf(golf &g, const char * name, int hc);

int setgolf(golf &g);

void handicap(golf &g, int hc);

void showgolf(const golf &g);

#endif // __GOLF_H__
