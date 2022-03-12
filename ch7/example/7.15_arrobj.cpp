/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 10:52:20
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 10:58:37
 * @FilePath     : 7.15_arrobj.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <array>
#include <string>

// constant data
const int SEASONS = 4;
const std::array<std::string, SEASONS> SNAMES =
    {"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(std::array<double, SEASONS> *pa);
// function that uses array object without modifying it
void show(std::array<double, SEASONS> da);

int main(int argc, char const *argv[])
{
    std::array<double, SEASONS> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(std::array<double, SEASONS> *pa)
{
    using namespace std;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << "Enter " << SNAMES[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(std::array<double, SEASONS> da)
{
    using namespace std;
    double total = 0.0;
    cout << endl << "EXPENSES" << endl;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << SNAMES[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}