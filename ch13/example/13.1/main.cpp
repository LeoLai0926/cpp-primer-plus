/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 14:44:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-09 16:13:53
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "tabtenn0.h"

using namespace std;

int main(int argc, char const *argv[])
{
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();

    if (player1.HasTable())
    {
        cout << ": has a table." << endl;
    }
    else
    {
        cout << ": hasn't a table." << endl;
    }

    player2.Name();
    if (player2.HasTable())
    {
        cout << ": has a table." << endl;
    }
    else
    {
        cout << ": hasn't a table." << endl;
    }

    return 0;
}
