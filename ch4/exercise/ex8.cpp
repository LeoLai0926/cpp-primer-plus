/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-16 21:45:55
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-16 21:54:46
 * @FilePath     : ex8.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

struct Pizza
{
    char company [20];
    float diameter;
    float weight;
};

int main(int argc, char const *argv[])
{
    Pizza * dinner_ptr = new Pizza;

    std::cout << "Enter the diameter of Pizza: ";
    std::cin >> dinner_ptr->diameter;
    std::cin.get();
    std::cout << "Enter the company of Pizza: ";
    std::cin.getline(dinner_ptr->company, 20);
    std::cout << "Enter the weight of Pizza: ";
    std::cin >> dinner_ptr->weight;

    std::cout << "Company: " << dinner_ptr->company << std::endl;
    std::cout << "Diaemeter: " << dinner_ptr->diameter << std::endl;
    std::cout << "Weight: " << dinner_ptr->weight << std::endl;

    delete dinner_ptr;
    return 0;
}
