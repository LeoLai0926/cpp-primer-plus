/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 17:40:34
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 17:46:49
 * @FilePath     : ex3.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>
#include <new>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

const int BUF = 512;
char buffer[BUF];

void show(const chaff &p);

int main(int argc, char const *argv[])
{
    char dross[20];
    int slag;

    chaff *pd1 = new chaff[2];
    chaff *pd2 = new (buffer) chaff[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "#" << i+1 << ": " << endl;
        cout << "Enter the dross: ";
        cin.getline(dross, 20);
        cout << "Enter the slag: ";
        cin >> slag;
        cin.get();

        strcpy(pd1[i].dross, dross);
        strcpy(pd2[i].dross, dross);

        pd1[i].slag = slag;
        pd2[i].slag = slag;
    }

    for (int i = 0; i < 2; i++)
    {
        show(pd1[i]);
        show(pd2[i]);
    }

    delete [] pd1;

    return 0;
}

void show(const chaff &p)
{
    cout << "The dross: " << p.dross << endl;
    cout << "The slag: " << p.slag << endl;
}