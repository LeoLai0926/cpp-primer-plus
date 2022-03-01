/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-01 23:51:39
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-02 00:01:37
 * @FilePath     : ex9.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <fstream>
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
    char ch;

    ifstream fin;
    fin.open("patrons.txt");
    fin >> num;
    fin.get();
    patrons *donors_ptr = new patrons[num];

    for (int i = 0; i < num; i++)
    {
        getline(fin, donors_ptr[i].name);
        fin >> donors_ptr[i].donation;
        fin.get();
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
    for (int i = 0; i < num; i++)
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

    fin.close();
    return 0;
}
