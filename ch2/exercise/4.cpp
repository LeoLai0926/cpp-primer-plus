/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-18 23:35:01
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-18 23:37:08
 * @FilePath     : 4.cpp
 * @Description  : 
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

/**
 * @brief 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示
 * ```
 *  Enter your age: 29
 * ```
 * 
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << age << " years include " << 12 * age << " months." << std::endl;
    return 0;
}
