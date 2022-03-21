/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 17:20:38
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 22:46:45
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "golf.h"

using namespace std;

const int SIZE = 2;

int main(int argc, char const *argv[])
{
    Golf g1("Rick", 100);
    Golf g2;

    cout << "Now show two golf player: " << endl;
    g1.show();
    g2.show();

    return 0;
}
