/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-01 20:53:11
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-01 21:01:30
 * @FilePath     : ex6.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <string>
using namespace std;

struct patrons
{
    string name;
    double donation;
};


int main(int argc, char const *argv[])
{
    int num;
    bool empty = true;
    cout << "Enter the number of donors: ";
    cin >> num;
    cin.get();

    patrons *donors_ptr = new patrons[num];

    for (int i = 0; i < num; i++)
    {
        cout << "donor #" << i + 1 << ": " << endl;
        cout << "name: ";
        cin >> donors_ptr[i].name;
        cout << "donation: ";
        cin >> donors_ptr[i].donation;
        cin.get();
    }

    cout << "==== Grand Patrons ====" << endl;
    for (int i = 0; i < num; i++)
    {
        if (donors_ptr[i].donation >= 10000)
        {
            cout << donors_ptr[i].name << ": " << donors_ptr[i].donation << endl;
            empty = false;
        }
    }
    if (empty == true)
    {
        cout << "none." << endl;
    }

    empty = false;
    cout << "==== Patrons ====" << endl;
    for (int i = 0; i < num; i ++)
    {
        if (donors_ptr[i].donation < 10000)
        {
            cout << donors_ptr[i].name << ": " << donors_ptr[i].donation << endl;
            empty = false;
        }
    }
    if (empty == true)
    {
        cout << "none." << endl;
    }

    return 0;
}
