/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-17 19:46:41
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-17 19:47:48
 * @FilePath     : 5.4_formore.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

const int ArSize = 16;

int main(int argc, char const *argv[])
{
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i-1];
    }
    for (int i = 0; i < ArSize; i++)
    {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }
    return 0;
}
