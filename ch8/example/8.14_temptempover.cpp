/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-18 22:53:32
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 10:14:31
 * @FilePath     : 8.14_temptempover.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

template <typename T>           // template A
void ShowArray(T arr[], int n);

template <typename T>           // template B
void ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main(int argc, char const *argv[])
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3]
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

    // set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }

    cout << "Listing Mr. E's counts of things: " << endl;
    // things is an array of int
    ShowArray(things, 6);           // uses template A
    cout << "Listsing Mr. E's debts: " << endl;
    // pd is an array of pointers to double
    ShowArray(pd, 3);               // use template B (more specialized)

    return 0;
}

template <typename T> // template A
void ShowArray(T arr[], int n)
{
    using namespace std;
    cout << "Template A" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T> // template B
void ShowArray(T *arr[], int n)
{
    using namespace std;
    cout << "Template B" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *arr[i] << " ";
    }
    cout << endl;
}