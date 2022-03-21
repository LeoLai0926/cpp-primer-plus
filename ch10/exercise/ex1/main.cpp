/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 21:38:34
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 21:40:05
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "account.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Account a1("Lai Li", "laili731236225", 1000);
    a1.show();

    cout << endl;
    a1.save(500);
    cout << "After save 500: " << endl;
    a1.show();

    cout << endl;
    a1.withdraw(800);
    cout << "After withdraw 800: " << endl;
    a1.show();

    return 0;
}
