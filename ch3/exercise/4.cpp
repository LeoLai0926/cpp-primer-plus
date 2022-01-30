/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-30 22:58:44
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-30 23:46:01
 * @FilePath     : 4.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    const int hour_per_day = 24;
    const int min_per_hour = 60;
    const int sec_per_min = 60;

    long seconds;
    int d, h, m, s;
    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;
    s = seconds % sec_per_min;
    m = seconds / sec_per_min;
    h = m / min_per_hour;
    m = m % min_per_hour;
    d = h / hour_per_day;
    h = h % hour_per_day;
    std::cout << seconds << " seconds = " << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds." << std::endl;

    return 0;
}
