/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 00:48:08
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 00:51:59
 * @FilePath     : 6.6_more_and.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

const char * qualify[4] =                   // an array of points
{
    "10,000-meter race.\n",
    "nud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"
};

int main(int argc, char const *argv[])
{
    using namespace std;
    int age;
    cout << "Enter your age in years: ";
    cin >> age;
    int index;

    if (age > 17 && age < 35)
    {
        index = 0;
    }
    else if (age >= 35 && age < 50)
    {
        index  =1;
    }
    else if (age >= 50 && age < 65)
    {
        index = 2;
    }
    else
    {
        index = 3;
    }

    cout << "You qualify for the " << qualify[index];
    return 0;
}
