/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 20:01:25
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 20:03:44
 * @FilePath     : ex3.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    int num;
    int sum = 0;
    do
    {
        std::cout << "Enter a number: ";
        std::cin >> num;
        sum += num;
        std::cout << "Current sum: " << sum << std::endl;
    } while (num != 0);

    return 0;
}
