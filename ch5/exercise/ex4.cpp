/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 20:04:53
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 20:39:34
 * @FilePath     : ex4.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

const int DEPOSIT_BASE = 100;

int main(int argc, char const *argv[])
{

    double daphne = DEPOSIT_BASE;
    double cleo = DEPOSIT_BASE;
    int year = 0;
    while (cleo <= daphne)
    {
        daphne += 0.1 * DEPOSIT_BASE;
        cleo += 0.05 * cleo;
        year++;
    }

    std::cout << "After " << year << " years: " << std::endl;
    std::cout << "Daphne: " << daphne << std::endl;
    std::cout << "Cleo: " << cleo << std::endl;

    return 0;
}
