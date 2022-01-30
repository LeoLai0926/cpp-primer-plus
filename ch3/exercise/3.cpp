/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-30 22:48:36
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-30 22:57:59
 * @FilePath     : 3.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    int d, m, s;
    double lat;
    std::cout << "Enter a latitude in degrees, minutes and seconds: ";
    std::cin >> d >> m >> s;
    lat = d + m / 60.0 + s / 3600.0;
    std::cout << d << " degrees " << m << " minutes " << s << "seconds = " << lat << " degrees." << std::endl;
    return 0;
}
