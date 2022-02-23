/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 20:40:02
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 20:44:10
 * @FilePath     : ex5.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>

const int NUM_OF_MONTHS = 12;

int main(int argc, char const *argv[])
{
    std::string months [NUM_OF_MONTHS] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"
    };

    int sales [NUM_OF_MONTHS];
    for (int i = 0; i < NUM_OF_MONTHS; i++)
    {
        std::cout << "Enter the sale of " << months[i] << ": ";
        std::cin >> sales[i];
    }

    int sum = 0;
    for (int i = 0; i < NUM_OF_MONTHS; i++)
    {
        sum += sales[i];
    }
    std::cout << "The sale of the whole year: " << sum << std::endl;

    return 0;
}
