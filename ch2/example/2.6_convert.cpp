/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-18 22:56:46
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-18 23:06:08
 * @FilePath     : 2.6_convert.cpp
 * @Description  : 
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
int stoneolb(int);          // function prototype

int main(int argc, char const *argv[])
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stoneolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stoneolb(int sts)
{
    return 14 * sts;
}
