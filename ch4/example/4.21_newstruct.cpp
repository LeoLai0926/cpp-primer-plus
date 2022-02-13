/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-13 18:37:25
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-13 18:41:03
 * @FilePath     : 4.21_newstruct.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

struct inflatable       // struct definition
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, char const *argv[])
{
    using namespace std;
    inflatable * ps = new inflatable;       // allot memory for structure
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);                  // method 1 for member access
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;                    // mmethod 2 for member access
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;                     // method 2
    cout << "Volume: " << ps->volume << " cubic feet" << endl;  // method 1
    cout << "Price: " << ps->price << endl;                     // method 1
    delete ps;                              // free memory used by structure
    return 0;
}
