/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-16 21:52:12
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-16 22:00:37
 * @FilePath     : ex9.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

struct CandyBar
{
    std::string brand;
    float weight;
    unsigned int calorie;
};

int main(int argc, char const *argv[])
{
    CandyBar * snacks = new CandyBar[3];
    snacks[0].brand = "Mocha Munch";
    snacks[0].weight = 2.3;
    snacks[0].calorie = 350;

    snacks[1].brand = "Flip Laming";
    snacks[1].weight = 3.2;
    snacks[1].calorie = 250;

    snacks[2].brand = "Betty Sue";
    snacks[2].weight = 25.4;
    snacks[2].calorie = 400;

    std::cout << "1st Brand: " << snacks[0].brand << std::endl;
    std::cout << "1st Weight: " << snacks[0].weight << std::endl;
    std::cout << "1st Calorie: " << snacks[0].calorie << std::endl;

    std::cout << "2nd Brand: " << snacks[1].brand << std::endl;
    std::cout << "2nd Weight: " << snacks[1].weight << std::endl;
    std::cout << "2nd Calorie: " << snacks[1].calorie << std::endl;

    std::cout << "3rd Brand: " << snacks[2].brand << std::endl;
    std::cout << "3rd Weight: " << snacks[2].weight << std::endl;
    std::cout << "3rd Calorie: " << snacks[2].calorie << std::endl;

    delete[] snacks;
    return 0;
}
