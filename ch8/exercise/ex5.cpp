/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 16:52:09
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 17:02:30
 * @FilePath     : ex5.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
const int ArSize = 5;

template <typename T>
const T &max5(T arr[ArSize]);

int main(int argc, char const *argv[])
{
    int intArr[ArSize] = {3, 8, 4, 0, 2};
    double doubleArr[ArSize] = {2.3, 1.0, 7.9, 6.4, 8.4};
    int maxInt = max5(intArr);
    double maxDouble = max5(doubleArr);
    std::cout << "Max int: " << maxInt << std::endl;
    std::cout << "Max double: " << maxDouble << std::endl;
    return 0;
}

template <typename T>
const T &max5(T arr[ArSize])
{
    T maxValue = arr[0];
    int idx = 0;
    for (int i = 1; i < ArSize; i++)
    {
        maxValue = arr[i] > maxValue ? arr[i] : maxValue;
        idx = i;
    }

    return arr[idx];
}
