/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-18 23:37:31
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-18 23:41:26
 * @FilePath     : 6.cpp
 * @Description  : 
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

/**
 * @brief 编写一个程序，其 main() 调用一个用户定义的函数 (以光年值为参数，并返回对应天文单位的值)
 *  该程序按下面的格式要求用户输入光年值，并显示结果：
 * ```
 *  Enter the number of light years: 4.2
 *  4.2 light years = 265608 astronomical units.
 * ```
 * 转换公式为：
 *  1光年 = 63240 天文单位
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    double ly;
    std::cout << "Enter the number of light year: ";
    std::cin >> ly;
    std::cout << ly << " light years = " << 63240 * ly << " astronomical units." << std::endl;
    return 0;
}
