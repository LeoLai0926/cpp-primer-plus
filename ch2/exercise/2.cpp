/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-18 23:19:41
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-18 23:23:24
 * @FilePath     : 2.cpp
 * @Description  : 
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

/**
 * @brief 2. 编写一个C++程序，它要求用户输入一个以 long 为单位的距离，然后将它转换为码（一 long 等于 220 码）
 * 
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    double dist_long;
    std::cout << "Enter distance in long: ";
    std::cin >> dist_long;
    std::cout << dist_long << " long = ";
    std::cout << dist_long / 220 << " yards." << std::endl;
    return 0;
}
