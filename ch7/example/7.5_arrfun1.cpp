/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-05 09:21:06
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-05 09:24:46
 * @FilePath     : 7.5_arrfun1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

using namespace std;

const int ArSize = 8;

int sum_arr(int arr[], int n);                  // prototype

int main(int argc, char const *argv[])
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    // some system require preceding int with static to
    // enable array initialization

    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << endl;
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