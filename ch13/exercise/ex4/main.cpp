/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-10 22:14:12
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 20:04:02
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "port.h"

using namespace std;

int main(int argc, char const *argv[])
{

    Port port1("ABC", "Sweet", 200);
    cout << port1 << endl;
    cout << "----------------------------------------------------------------" << endl;

    VintagePort vp("EFG", "vintage", 300, "OldJack", 40);
    cout << vp << endl;
    cout << "----------------------------------------------------------------" << endl;

    VintagePort vp2(vp);
    cout << vp2 << endl;
    cout << "----------------------------------------------------------------" << endl;

    Port *p_port;
    p_port = &port1;
    p_port->Show();
    cout << "----------------------------------------------------------------" << endl;

    p_port = &vp;
    p_port->Show();

    return 0;
}
