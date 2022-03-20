/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 14:03:05
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 14:08:32
 * @FilePath     : namessp.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "namesp.h"

void other(void);
void another(void);

int main(int argc, char const *argv[])
{
    using debts::Debt;
    using debts::showDebt;

    Debt golf = {{"Benny", "Goatsniff"}, 120.0};
    showDebt(golf);
    other();
    another();
    return 0;
}


void other(void)
{
    using std::cout;
    using std::endl;
    using namespace debts;

    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        getDebt(zippy[i]);
    }
    for (i = 0; i < 3; i++)
    {
        showDebt(zippy[i]);
    }
    cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
    return ;
}


void another(void)
{
    using pers::Person;
    Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl;
}