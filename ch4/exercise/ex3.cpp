/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-16 21:09:48
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-16 21:15:19
 * @FilePath     : ex3.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
    const int Size = 20;
    char firstName [Size], lastName [20];
    char fullName [2 * Size];
    std::cout << "Enter your first name: ";
    std::cin.getline(firstName, 20);
    std::cout << "Enter your last name: ";
    std::cin.getline(lastName, 20);

    std::strcpy(fullName, lastName);
    std::strcat(fullName, ", ");
    std::strcat(fullName, firstName);

    std::cout << "Here's the information in a single string: " << fullName << std::endl;

    return 0;
}
