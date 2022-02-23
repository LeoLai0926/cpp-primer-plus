/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 19:55:11
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 20:01:02
 * @FilePath     : ex2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <array>

const int ArSize = 101;

int main(int argc, char const *argv[])
{
    std::array<long double, ArSize> factorials;
    factorials[0] = factorials[1] = 1;
    for (int i = 2; i < ArSize; i++)
    {
        factorials[i] = factorials[i-1] * i;
    }

    for (int i = 0; i < ArSize; i++)
    {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }
    return 0;
}
