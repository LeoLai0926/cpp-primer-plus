/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-17 19:52:25
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-17 19:53:36
 * @FilePath     : 5.5_bigstep.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter an integer: ";
    int by;
    std::cin >> by;
    std::cout << "Counting by " << by << " s: " << std::endl;
    for (int i = 0; i < 100; i= i + by)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
