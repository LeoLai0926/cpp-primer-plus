/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-05 09:21:06
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-05 09:41:04
 * @FilePath     : 7.6_arrfun2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

const int ArSize = 8;

int sum_arr(int arr[], int n);                  // prototype

int main(int argc, char const *argv[])
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    // some systems require preceding int with static to
    // enable array initialization

    std::cout << cookies << " = array address, ";
    // some systems require a type cast: unsigned (cookies)

    std::cout << sizeof(cookies) << " = sizeof cookies." << std::endl;
    int sum = sum_arr(cookies, ArSize);
    std::cout << "Total cookies eaten: " << sum << std::endl;

    sum = sum_arr(cookies, 3);                  // a lie
    std::cout << "First three eaters ate " << sum << " cookies." << std::endl;

    sum = sum_arr(cookies + 4, 4);              // another lie
    std::cout << "Last four eaters ate " << sum << " cookies." << std::endl;
    return 0;
}


// return the sum of an integer array
int sum_arr(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}