/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 00:37:28
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 00:40:47
 * @FilePath     : file1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "main() reports the following address: " << endl;
    cout << "&tom: " << &tom <<" | &dick: " << &dick << " | &harry: " << &harry << endl;
    remote_access();
    return 0;
}
