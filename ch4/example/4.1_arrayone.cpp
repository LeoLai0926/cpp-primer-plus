/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-08 21:48:46
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-08 22:31:10
 * @FilePath     : 4.1_arrayone.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int yams[3];            // creates array with three elements
    yams[0] = 7;            // assign value to first element
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5};  // create, initialize array
    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs " << yamcosts[1] << " cents per yam." << endl;

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents." << endl;

    cout << endl;
    cout << "Size of yams array = " << sizeof(yams) << " bytes." << endl;
    cout << "Size of one element = " << sizeof(yams[0]) << " bytes." << endl;

    return 0;
}
