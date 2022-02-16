/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-16 21:24:43
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-16 21:28:11
 * @FilePath     : ex6.cpp
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
    CandyBar snack[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Flip Flaming", 3.2, 250},
        {"Betty Sue", 5.4, 400}
    };

    std::cout << "1st Brand: " << snack[0].brand << std::endl;
    std::cout << "1st Weight: " << snack[0].weight << std::endl;
    std::cout << "1st Calorie: " << snack[0].calorie << std::endl;

    std::cout << "2nd Brand: " << snack[1].brand << std::endl;
    std::cout << "2nd Weight: " << snack[1].weight << std::endl;
    std::cout << "2nd Calorie: " << snack[1].calorie << std::endl;

    std::cout << "3rd Brand: " << snack[2].brand << std::endl;
    std::cout << "3rd Weight: " << snack[2].weight << std::endl;
    std::cout << "3rd Calorie: " << snack[2].calorie << std::endl;

    return 0;
}
