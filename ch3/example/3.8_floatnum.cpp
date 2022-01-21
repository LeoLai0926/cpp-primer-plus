/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-21 20:56:33
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-21 21:01:00
 * @FilePath     : 3.8_floatnum.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);   // fixed-point
    float tub = 10.0 / 3.0;                             // good to about 6 places
    double mint = 10.0 / 3.0;                           // good to about 15 places
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
    return 0;
}
