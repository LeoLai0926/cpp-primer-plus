/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 16:11:58
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 16:24:29
 * @FilePath     : ex2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>

const int StrSize = 40;

struct CandyBar
{
    char brand[StrSize];
    float weight;
    int calorie;
};

void show(const CandyBar &cb);

const CandyBar & setValue(              // reference
    CandyBar & cb, const char * b="Millennium Munch", const double w=2.85, const int c=30
    );

int main(int argc, char const *argv[])
{
    CandyBar candybar;
    candybar = setValue(candybar);
    show(candybar);
    candybar.weight = 2.8;
    show(candybar);
    return 0;
}

void show(const CandyBar &cb)
{
    using namespace std;
    cout << "Brand: " << cb.brand << endl;
    cout << "Weight: " << cb.weight << endl;
    cout << "Calorie: " << cb.calorie<< endl;
}

const CandyBar &setValue(CandyBar &cb, const char *b, const double w, const int c)
{
    strcpy(cb.brand, b);
    cb.weight = w;
    cb.calorie = c;
    return cb;
}
