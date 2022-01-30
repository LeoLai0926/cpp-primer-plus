/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-30 20:15:03
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-30 20:31:41
 * @FilePath     : 2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    int in, ft, po;
    double bmi;
    std::cout << "Enter your height in inch and foot: ";
    std::cin >> in >> ft;
    std::cout << "Etner your weights in pounds: ";
    std::cin >> po;
    bmi = (po / 2.2) / ((in * 12 + ft)*0.0254) / ((in * 12 + ft)*0.0254);
    std::cout << "Your bmi is: " << bmi << std::endl;
    return 0;
}
