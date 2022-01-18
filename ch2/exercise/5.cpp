/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-18 23:27:52
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-18 23:33:15
 * @FilePath     : 4.cpp
 * @Description  : 
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

/**
 * @brief 编写一个程序，其中的 main() 调用一个用户定义的函数（以摄氏温度值为参数，并返回相应的华氏温度值）
 *  该程序按下面的格式要求用户输入摄氏温度值，并显示结果。
 * ```
 *  Please enter a Celsius value: 20
 *  20 degrees Celsius is 68 degree Fahrenheit.
 * ```
 * 下面是转换公式
 *      华氏温度 = 1.8 * 摄氏温度 + 32.0
 */

#include <iostream>
double convert(double);

int main(int argc, char const *argv[])
{
    double cel;
    std::cout << "Please enter a Celsius value: ";
    std::cin >> cel;
    std::cout << cel << " degrees Celsius is ";
    std::cout << convert(cel) << " degree Fahrenheit." << std::endl;
    return 0;
}

double convert(double cel)
{
    double fah;
    fah = 1.8 * cel + 32.0;
    return fah;
}