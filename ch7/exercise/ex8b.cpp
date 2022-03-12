/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 21:45:30
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 21:50:40
 * @FilePath     : ex8b.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>

// constant data
const int SEASONS = 4;
const char * SNAMES[] =
    {"Spring", "Summer", "Fall", "Winter"};

struct Spend
{
    double money[SEASONS];
};



// function to modify array object
void fill(double arr[], int size);
// function that uses array object without modifying it
void show(double arr[], int size);

int main(int argc, char const *argv[])
{
    Spend expenses;
    fill(expenses.money, SEASONS);
    show(expenses.money, SEASONS);
    return 0;
}

void fill(double arr[], int size)
{
    using namespace std;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << SNAMES[i] << " expenses: ";
        cin >> arr[i];
    }
}

void show(double arr [], int size)
{
    using namespace std;
    double total = 0.0;
    cout << endl
         << "EXPENSES" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << SNAMES[i] << ": $" << arr[i] << endl;
        total += arr[i];
    }
    cout << "Total Expenses: $" << total << endl;
}