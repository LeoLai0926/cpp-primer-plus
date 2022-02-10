/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-10 15:38:54
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-10 15:46:03
 * @FilePath     : 4.13_arrstruc.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, char const *argv[])
{
    using namespace std;
    inflatable guests[2] =              // initializing an array of structs
    {
        {"Bambi", 0.5, 21.99},          // first structure in array
        {"Godzilla", 2000, 565.99}      // next structure in array
    };

    cout <<"The guests " << guests[0].name << " and " << guests[1].name << endl;
    cout << "have a combined volume of "
        << guests[0].volume + guests[1].volume << " cubic feet." << endl;
    return 0;
}


