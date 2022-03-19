/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 17:20:33
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 17:46:05
 * @FilePath     : ex6.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>

template <typename T>
T maxn(T arr[], int size);

template <>
char * maxn(char * arr[], int size);

int main(int argc, char const *argv[])
{
    using namespace std;
    int intArr[6] = {4, 9, 2, 0, 6, 1};
    double doubleArr[4] = {8.2, 1.4, 7.5, 9.9};
    char * strArr[8] =
    {
        "nice",
        "Laili",
        "Come on!",
        "Ye Xin",
        "This is max str"
    };

    int maxInt = maxn(intArr, 6);
    double maxDouble = maxn(doubleArr, 4);
    const char * maxStr = maxn(strArr, 5);

    cout << "Max int: " << maxInt << endl;
    cout << "Max double: " << maxDouble << endl;
    cout << "Max string: " << maxStr << endl;
    return 0;
}

template <typename T>
T maxn(T arr[], int size)
{
    T maxValue = arr[0];
    for (int i = 0; i < size; i++)
    {
        maxValue = arr[i] > maxValue ? arr[i] : maxValue;
    }
    return maxValue;
}

template <>
char *maxn(char *arr[], int size)
{
    char * maxString = arr[0];
    for (int i = 1; i < size; i++)
    {
        maxString = strlen(arr[i]) > strlen(maxString) ? arr[i] : maxString;
    }
    return maxString;
}