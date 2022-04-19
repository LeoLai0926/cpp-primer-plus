/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-18 22:26:42
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-19 22:58:10
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "arraytp.h"

int main(int argc, char const *argv[])
{

    ArrayTP<int, 10> sums;
    ArrayTP<double, 10> aves;
    ArrayTP< ArrayTP<int, 5>, 10> twodee;

    int i, j;
    for (i = 0; i < 10; i++)
    {
        sums[i] = 0;
        for (j = 0; j < 5; j++)
        {
            twodee[i][j] = (i + 1) * (j + 1);
            sums[i] += twodee[i][j];
        }
        aves[i] = (double) sums[i] / 10;
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            std::cout.width(2);
            std::cout << twodee[i][j] << " ";
        }
        std::cout << ": sum = ";
        std::cout.width(3);
        std::cout << sums[i] << ", average = " << aves[i] <<std::endl;
    }

    std::cout << "Done." << std::endl;

    return 0;
}
