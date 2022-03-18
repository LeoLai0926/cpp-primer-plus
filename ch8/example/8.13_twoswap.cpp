/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-18 22:35:05
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-18 22:45:03
 * @FilePath     : 8.13_twoswap.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
template <typename T>
void Swap(T &a, T &b);

struct job
{
    char name[40];
    double salary;
    int floor;
};


// explicit specialization
template<>
void Swap(job &j1, job &j2);
void Show(job &j);

int main(int argc, char const *argv[])
{
    using namespace std;

    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i = " << i << ", j = " << j << endl;
    cout << "Using compiler-generated int swapper: " << endl;
    Swap(i, j);                 // generates void Swap(int &, int &)
    cout << "Now i = " << i << ", j = " << j << endl;

    job sue = {"Susan Yaffee", 73000.60, 7};
    job sid = {"Sidney Taffee", 78060.72, 9};
    cout << "Before job swapping: " << endl;
    Show(sue);
    Show(sid);
    Swap(sue, sid);             // use void Swap(job &, job &)
    cout << "After job swapping: " << endl;
    Show(sue);
    Show(sid);

    // cin.get()
    return 0;
}

template <typename T>
void Swap(T &a, T &b)           // general version
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// swaps just the salary and floor fields of a job structure
template <>
void Swap<job>(job &j1, job &j2)
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;

    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j)
{
    using namespace std;
    cout << j.name << ": $" << j.salary
         << " on floor " << j.floor << endl;
}