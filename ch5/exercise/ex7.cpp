/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 20:54:53
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 21:05:34
 * @FilePath     : ex7.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <string>

struct Car
{
    std::string manufacturer;
    int year;
};

int main(int argc, char const *argv[])
{
    int num_of_car;
    std::cout << "How many cars do you wish to catalog: ";
    std::cin >> num_of_car;
    std::cin.get();

    Car *p_car = new Car[num_of_car];
    for (int i = 0; i < num_of_car; i++)
    {
        std::cout << "Car #" << i+1 << ": " << std::endl;
        std::cout << "Please enter the manufacturer: ";
        std::getline(std::cin, p_car[i].manufacturer);
        std::cout << "Please enter the year: ";
        std::cin >> p_car[i].year;
        std::cin.get();
    }

    std::cout << "Here is your collection: " << std::endl;
    for (int i = 0; i < num_of_car; i++)
    {
        std::cout << p_car[i].year << "\t" << p_car[i].manufacturer << std::endl;
    }

    delete [] p_car;
    return 0;
}


