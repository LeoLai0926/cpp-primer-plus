/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-09 16:06:09
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-10 00:38:41
 * @FilePath     : tabtenn1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "tabtenn1.h"

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht)
    : firstname(fn), lastname(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}

RatedPlayer::RatedPlayer(
            unsigned int r,
            const string &fn,
            const string &ln,
            bool ht)
    : TableTennisPlayer(fn, ln, ht), rating(r)
{
}

RatedPlayer::RatedPlayer(unsigned int r,
            const TableTennisPlayer &tp)
    : TableTennisPlayer(tp), rating(r)
{
}
