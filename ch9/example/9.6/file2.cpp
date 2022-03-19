/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 00:37:28
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 00:41:49
 * @FilePath     : file2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

extern int tom;
static int dick = 30;
int harry = 300;

void remote_access()
{
    using namespace std;
    cout << "remote_access() reports the following address: " << endl;
    cout << "&tom: " << &tom << " | &dick: " << &dick << " | &harry: " << &harry << endl;
}