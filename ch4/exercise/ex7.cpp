/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-16 21:40:39
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-16 21:44:11
 * @FilePath     : ex7.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>

struct Pizza
{
    std::string company;
    float diameter;
    float weight;
};


int main(int argc, char const *argv[])
{
    Pizza dinner;
    std::cout << "Enter the company of Pizza: ";
    std::getline(std::cin, dinner.company);
    std::cout << "Enter the diameter of Pizza: ";
    std::cin >> dinner.diameter;
    std::cout << "Enter the weight of Pizza: ";
    std::cin >> dinner.weight;

    std::cout << "Company: " << dinner.company << std::endl;
    std::cout << "Diaemeter: " << dinner.diameter << std::endl;
    std::cout << "Weight: " << dinner.weight << std::endl;

    return 0;
}
