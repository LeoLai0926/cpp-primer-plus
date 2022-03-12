/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 11:17:06
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 11:24:55
 * @FilePath     : 7.17_ruler.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

const int LEN = 128;
const int DIVS = 7;

void subdivide(char ar[], int low, int high, int level);

int main(int argc, char const *argv[])
{
    char ruler[LEN];
    int i;
    for (i = 1; i < LEN-2; i++)
    {
        ruler[i] = ' ';
    }
    ruler[LEN - 1] = '\0';

    int max = LEN - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    std::cout << ruler << std::endl;
    for (i = 1; i <= DIVS; i++)
    {
        subdivide(ruler, min, max, i);
        std::cout << ruler << std::endl;
        for (int j = i; j < LEN-2; j++)
        {
            ruler[j] = ' ';                         // reset to blank ruler
        }
    }
    return 0;
}


void subdivide(char ar[], int low, int high, int level)
{
    if (level == 0)
    {
        return ;
    }

    int mid = (high - low) / 2 + low;;
    ar[mid] = '|';
    subdivide(ar, low, mid, level-1);
    subdivide(ar, mid, high, level-1);
}