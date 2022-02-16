/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-16 21:16:51
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-16 21:17:55
 * @FilePath     : ex4.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string firstName, lastName, fullName;
    std::cout << "Enter your first name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter your last name: ";
    std::getline(std::cin, lastName);

    fullName = lastName + ", " + firstName;
    std::cout << "Here's the information in a single string: " << fullName << std::endl;

    return 0;
}
