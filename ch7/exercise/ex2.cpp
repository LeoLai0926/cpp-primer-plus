/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 16:26:13
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 16:51:51
 * @FilePath     : ex2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

using namespace std;

const int SIZE = 10;

int input(double * scores);
void show(double *, int n);
double proc(double *scores, int n);

int main(int argc, char const *argv[])
{
    double scores[SIZE];
    int n = input(scores);
    show(scores, n);
    double mean = proc(scores, n);
    cout << "Mean: " << mean << endl;
    return 0;
}


int input(double * scores)
{
    double inp;
    cout << "Enter golf grades: " << endl;
    int i;
    for (i = 0; i < SIZE; i++)
    {
        cout << "#" << i+1 << ": ";
        if (!(cin >> scores[i]))
        {
            break;
        }
    }
    return i;
}

void show(double * scores, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "score #" << i+1 << ": " << scores[i] << endl;
    }
}

double proc(double * scores, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += scores[i];
    }
    return sum / n;
}
