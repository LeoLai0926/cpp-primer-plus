/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-30 23:50:05
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-30 23:52:52
 * @FilePath     : 5.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    long total_pop, us_pop;
    double ratio;
    std::cout << "Enter the world's population: ";
    std::cin >> total_pop;
    std::cout << "Enter the population of the US: ";
    std::cin >> us_pop;
    ratio = double(us_pop) / double(total_pop);
    std::cout << "The population of the US is " << ratio * 100 << "\% of the world population." << std::endl;
    return 0;
}
