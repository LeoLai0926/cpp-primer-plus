/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-27 15:38:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 10:18:24
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "stonewt.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Stonewt incognito = 275;        // uses constructor to initialize
    Stonewt wolfe(285.7);           // same as Stonewt wolfe = 285.7
    Stonewt taft(21, 8);

    incognito.setType(Stonewt::POUNDS);
    cout << incognito << endl;
    wolfe.setType(Stonewt::FLOATPOUNDS);
    cout << wolfe << endl;
    taft.setType(Stonewt::STONE);
    cout << taft << endl;

    taft = incognito + wolfe;
    taft.setType(Stonewt::STONE);
    cout << taft << endl;

    taft = wolfe - incognito;
    taft.setType(Stonewt::FLOATPOUNDS);
    cout << taft << endl;

    incognito = incognito * 2;
    incognito.setType(Stonewt::POUNDS);
    cout << incognito << endl;

    return 0;
}
