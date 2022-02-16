/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-16 22:03:55
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-16 22:09:08
 * @FilePath     : ex10.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <array>

int main(int argc, char const *argv[])
{
    std::array<double, 3> recordList;
    float avg;

    std::cout << "Enter the scores of 40m: " << std::endl;
    std::cout << "#1: ";
    std::cin >> recordList[0];
    std::cout << "#2: ";
    std::cin >> recordList[1];
    std::cout << "#3: ";
    std::cin >> recordList[2];

    std::cout << "1st score: " << recordList[0] << std::endl;
    std::cout << "2nd score: " << recordList[1] << std::endl;
    std::cout << "3rd score: " << recordList[2] << std::endl;

    avg = (recordList[0] + recordList[1] + recordList[2]) / 3;
    std::cout << "Average: " << avg << std::endl;

    return 0;
}
