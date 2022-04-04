/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-04 10:55:24
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-04 11:04:09
 * @FilePath     : customer.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <cstdlib>
#include <ctime>
#include "customer.h"


void Customer::set(long when)
{
    srand(time(0));
    processtime = std::rand() % 3 + 1;
    arrive = when;
}
