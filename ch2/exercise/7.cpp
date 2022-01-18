/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-18 23:41:54
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-18 23:45:03
 * @FilePath     : 7.cpp
 * @Description  : 
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

/**
 * @brief 编写一个程序，要求用户输入小时数和分钟数。在 main() 函数中，将这两个值传递给一个 void 函数，
 *  后者以下面这样的格式显示这两个值：
 * ```
 *  Enter the number of hours: 9
 *  Enter the number of minutes: 28
 *  Time: 9:28
 * 
 */

#include <iostream>
void show(int, int);

int main(int argc, char const *argv[])
{
    int h, m;
    std::cout << "Enter the number of hours: ";
    std::cin >> h;
    std::cout << "Enter the number of minutes: ";
    std::cin >> m;
    show(h, m);
    return 0;
}

void show(int h, int m)
{
    std::cout << "Time: " << h << ":" << m << std::endl; 
}