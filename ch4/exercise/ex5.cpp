/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-16 21:19:26
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-16 21:23:45
 * @FilePath     : ex5.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <string>

struct CandyBar
{
    std::string brand;
    float weight;
    unsigned int calorie;
};


int main(int argc, char const *argv[])
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    std::cout << "Brand: " << snack.brand << std::endl;
    std::cout << "Weight: " << snack.weight << std::endl;
    std::cout << "Calorie: " << snack.calorie << std::endl;
    return 0;
}
