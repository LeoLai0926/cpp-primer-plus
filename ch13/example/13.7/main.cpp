/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 14:44:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-10 09:46:47
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "brass.h"

using namespace std;

int main(int argc, char const *argv[])
{

    Brass Piggy("Porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);

    Piggy.ViewAcct();
    cout << endl;

    Hoggy.ViewAcct();
    cout << endl;

    cout << "Depositing $1000 into the Hogg Account: " << endl;
    Hoggy.Deposit(1000.00);
    cout << "New Balance: $" << Hoggy.Balance() << endl;

    cout << "WithDrawing $4200 fron the pigg Account: " << endl;
    Piggy.Withdraw(4200);
    cout << "Pigg account balance: $" << Piggy.Balance() << endl;

    cout << "WithDrawing $4200 from the Hogg Account: " << endl;
    Hoggy.Withdraw(4200);
    Hoggy.ViewAcct();
    return 0;
}
