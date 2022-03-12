/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 20:08:20
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 20:21:02
 * @FilePath     : ex4.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

long double one_try(unsigned int choosen, unsigned int population);

int main(int argc, char const *argv[])
{
    using namespace std;
    long double prob = one_try(5, 47) * one_try(1, 27);
    cout << "Prob: " << prob << endl;
    return 0;
}

long double one_try(unsigned int choosen, unsigned int population)
{
    long double prob = 1.0;
    for (int c = choosen, p = population; c >0; c--, p--)
    {
        prob *= (p / c);
    }
    return prob;
}
