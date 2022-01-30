/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-30 23:55:12
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-31 00:01:32
 * @FilePath     : 6.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    int dis, oil;
    std::cout << "Enter the distance: ";
    std::cin >> dis;
    std::cout << "Enter the oil consumption: ";
    std::cin >> oil;
    std::cout << "The oil cost per 100 killometer is " << 100 * double(oil) / double(dis) << " L" << std::endl;
    return 0;
}
