/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-10 21:20:39
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-10 21:24:11
 * @FilePath     : 7.8_arrfun4.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

const int ArSize = 8;

int sum_arr(const int * begin, const int * end);

int main(int argc, char const *argv[])
{
    using namespace std;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    // some systems require preceding int with static to
    // enable array initialization

    int sum = sum_arr(cookies, cookies + ArSize);
    cout << "Total cookies eaten: " << sum << endl;

    sum = sum_arr(cookies, cookies + 3);            // first 3 elements
    cout << "First three eaters ate " << sum << " cookies." << endl;

    sum = sum_arr(cookies + 4, cookies + 8);        // last 4 elements
    cout << "Last four eaters are " << sum << " cookies." << endl;

    return 0;
}

// return the sum of an integer array
int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin; pt != end; pt++)
    {
        total += *pt;
    }
    return total;
}