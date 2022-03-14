/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-14 21:38:15
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-14 21:44:47
 * @FilePath     : 8.12_twotemps.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
template <typename T>                   // original template
void Swap(T &a, T &b);

template <typename T>                   // new template
void Swap(T *a, T *b, int n);

void Show(int a[]);

const int LIM = 8;

int main(int argc, char const *argv[])
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i = " << i << ", j = " << j << "." << endl;
    cout <<"Using compiler-generated int swapper: " << endl;
    Swap(i, j);                         // matches original template
    cout << "After swap, now i = " << i << ", j = " << j << "." << endl;

    int d1[LIM] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[LIM] = {0, 7, 2, 0, 1, 9, 6, 9};
    cout << "Original arrays: " << endl;
    Show(d1);
    Show(d2);
    Swap(d1, d2, LIM);                  // matches new template
    cout << "Swapped arrays: " << endl;
    Show(d1);
    Show(d2);
    // cin.get();

    return 0;
}

template <typename T>
void Swap(T *a, T *b, int n)
{
    T temp;
    for (int i = 0; i < n; i++)
    {
        temp = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = temp;
    }
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

void Show(int a[])
{
    using namespace std;
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i = 4; i < LIM; i++)
    {
        cout << a[i];
    }
    cout << endl;
}