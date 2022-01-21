/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-21 21:34:35
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-21 21:42:55
 * @FilePath     : 3.11_divide.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division: 9 / 5 = " << 9 / 5 << endl;
    cout << "Floating-point division: 9.0 / 5.0 = " << 9.0 / 5.0 << endl;
    cout << "Mixed division 9.0 / 5 = " << 9.0 / 5 << endl;
    cout << "double constants: 1e7 / 9.0 = " << 1.e7 / 9.0 << endl;
    cout << "float constants: 1e7f / 9.0f = " << 1.e7f / 9.0f << endl;
    return 0;
}
