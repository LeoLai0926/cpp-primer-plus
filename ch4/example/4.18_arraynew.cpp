/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-11 23:01:52
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-11 23:04:14
 * @FilePath     : 4.18_arraynew.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    double * p3 = new double [3];       // space for 3 doubles
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << "." << endl;
    p3 = p3 + 1;                        // increment the pointer
    cout << "Now p3[0] is " << p3[0] << "." << endl;
    cout << "p3[1] is " << p3[1] << "." << endl;
    p3 = p3 - 1;                        // point back to beginning
    delete [] p3;                       // free the memory

    return 0;
}
