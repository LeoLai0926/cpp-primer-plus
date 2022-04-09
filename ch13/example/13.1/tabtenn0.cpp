/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-09 16:06:09
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-09 16:08:59
 * @FilePath     : tabtenn0.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "tabtenn0.h"

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht)
    : firstname(fn), lastname(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}