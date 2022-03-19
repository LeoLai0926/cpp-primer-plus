/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 00:12:21
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 00:18:06
 * @FilePath     : external.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "support.h"

using namespace std;

double warming = 0.3; // external variable

int main(int argc, char const *argv[])
{
    cout << "Global warming = " << warming << " degrees." << endl;
    update(0.1);
    cout << "Global warming = " << warming << " degrees." << endl;
    local();
    cout << "Global warming = " << warming << " degrees." << endl;

    return 0;
}
