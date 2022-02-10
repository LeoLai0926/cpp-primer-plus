/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-10 15:23:37
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-10 15:28:26
 * @FilePath     : 4.11_structur.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

struct inflatable       // structure declaration
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, char const *argv[])
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",      // name value
        1.88,                   // volume value
        29.99                   // price value
    };      // guest is a structure variable of type inflatable
            // It is initialized to be the indicated values

    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };      // pal is a second variable of type inflatable
            // NOTE: some implementations require using static inflatable guest =

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!" << endl;
    // pal.name is the name member of the pad variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!" << endl;
    return 0;
}

