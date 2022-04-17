/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-17 11:01:31
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-17 15:53:31
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>
#include "workermi.h"

const int SIZE = 5;

using namespace std;

int main(int argc, char const *argv[])
{
    Worker * lolas[SIZE];

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        std::cout << "Enter the employee category: " << std::endl
                << "w: waiter\t" << "s: singer\t" << "t: singing waiter\t"
                << "q: quit" << std::endl;
        std::cin >> choice;
        while (std::strchr("wstq", choice) == NULL)
        {
            std::cout << "Please enter a w, s, t or q: ";
            std::cin >> choice;
        }

        if (choice == 'q')
        {
            std::cout << "Bye." << std::endl;
            break;
        }

        switch(choice)
        {
            case 'w': lolas[ct] = new Waiter; break;
            case 's': lolas[ct] = new Singer; break;
            case 't': lolas[ct] = new SingingWaiter; break;
        }
        std::cin.get();
        lolas[ct]->Set();
    }

    cout << "\nHere is your staff: " << std::endl;
    int i;
    for (i = 0; i < ct; i++)
    {
        std::cout << std::endl;
        lolas[i]->Show();
    }

    for (i = 0; i < ct; i++)
    {
        delete lolas[i];
    }

    std::cout << "Bye." << std::endl;
    return 0;
}
