/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 12:01:45
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 13:29:25
 * @FilePath     : 9.10_newplace.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <new>                  // for placement new

const int BUF = 512;
const int N = 5;
char buffer[BUF];               // chunk of memory

int main(int argc, char const *argv[])
{
    using namespace std;
    double *pd1, *pd2;
    int i;

    cout << "Calling new and placement new: " << endl;
    pd1 = new double[N];            // use heap
    pd2 = new (buffer) double[N];   // use buffer array

    for (i = 0; i < N; i++)
    {
        pd2[i] =pd1[i] = 1000 + 20.0 * i;
    }
    cout << "Memory address: " << endl;
    cout << " heap: " << pd1 << " static: " << (void * ) buffer << endl;
    cout << "Memory contents: " << endl;
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }


    cout << endl;
    cout << "Calling new and placement new a second time: " << endl;
    double *pd3, *pd4;
    pd3 = new double[N];            // find new address
    pd4 = new (buffer) double[N];   // overwrite old data
    for (i = 0; i < N; i++)
    {
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    }
    cout << "Memory contents: " << endl;
    for (i = 0; i < N; i++)
    {
        cout << pd3[i] << " at " << &pd3[i] << "; ";
        cout << pd4[i] << " at " << &pd4[i] << endl;
    }


    cout << endl;
    cout << "Calling new and placement new a third time: " << endl;
    delete [] pd1;
    pd1 = new double[N];
    pd2 = new (buffer + N * sizeof(double)) double(N);
    for (i = 0; i < N; i++)
    {
        pd2[i] = pd1[i] = 1000 + 60.0 * i;
    }
    cout << "Memory contents: " << endl;
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }

    delete [] pd1;
    delete [] pd3;

    return 0;
}
