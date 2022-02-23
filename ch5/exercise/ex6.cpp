/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 20:46:09
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 20:54:26
 * @FilePath     : ex6.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <string>

const int NUM_OF_YEARS = 3;
const int NUM_OF_MONTHS_PER_YEAR = 12;

int main(int argc, char const *argv[])
{
    double sales[NUM_OF_YEARS][NUM_OF_MONTHS_PER_YEAR];
    std::string Months[NUM_OF_MONTHS_PER_YEAR] =
    {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"
    };

    for (int y = 0; y < NUM_OF_YEARS; y++)
    {
        std::cout << "Enter the sale of year #" << y+1 << std::endl;
        for (int m = 0; m < NUM_OF_MONTHS_PER_YEAR; m++)
        {
            std::cout << "Enter the sale of " << Months[m] << " in year #" << y+1 << ": ";
            std::cin >> sales[y][m];
        }
    }
    std::cout << "Input done." << std::endl;

    double total = 0;
    for (int y = 0; y < NUM_OF_YEARS; y++)
    {
        double sum_of_year = 0;
        for (int m = 0; m < NUM_OF_MONTHS_PER_YEAR; m++)
        {
            sum_of_year += sales[y][m];
            total += sales[y][m];
        }
        std::cout << "Total sale of year #" << y + 1 << ": " << sum_of_year << std::endl;
    }
    std::cout << "Total sale: " << total << std::endl;

    return 0;
}
