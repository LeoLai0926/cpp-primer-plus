/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-19 21:57:19
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-19 21:58:48
 * @FilePath     : 5.15_dowhile.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int n;

    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite number" << endl;
    do
    {
        cin >> n;           // execute body
    } while (n != 7);       // then test
    cout << "Yes, 7 is my favorite." << endl;

    return 0;
}
