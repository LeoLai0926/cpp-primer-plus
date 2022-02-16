/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-16 21:03:19
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-16 21:09:08
 * @FilePath     : ex2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string name;
    std::string dessert;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your favorite dessert: ";
    std::getline(std::cin, dessert);
    std::cout << "I have some delicious " << dessert << " for you " << name << std::endl;
    return 0;
}
