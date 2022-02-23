/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 00:15:31
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 00:18:44
 * @FilePath     : 6.2_ifelse.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    char ch;

    std::cout << "Type, and I shall repeat." << std::endl;
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
        {
            std::cout << ch;            // done if newline
        }
        else
        {
            std::cout << ++ch;          // done otherwise
        }
        std::cin.get(ch);
    }
    // try ch + 1 instead of ++ch for interesting effect
    std::cout << std::endl << "Please excuse the slight confusion." << std::endl;
    // std::cin.get()
    // std::cin.get();
    return 0;
}
