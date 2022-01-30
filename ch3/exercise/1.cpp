/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-27 22:13:20
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-27 22:26:50
 * @FilePath     : 1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

/**
 * @brief 编写一个程序, 要求用户使用一个整数指出自己的身高(单位为英寸),
 *      然后将身高转换为英尺和英寸. 该程序使用下划线来指示输入位置.
 *      另外, 使用一个const符号常量来表示转换因子.
 *
 */

#include <iostream>

int main(int argc, char const *argv[])
{

    using namespace std;
    const int trans = 12;
    int height_inch;
    cout << "Enter your height (inch): _____\b\b\b\b\b";
    cin >> height_inch;

    int height_foot = height_inch / trans;
    height_inch = height_inch % trans;

    cout << "I'am " << height_foot << " foot and " << height_inch << " inch." << endl;

    return 0;
}
