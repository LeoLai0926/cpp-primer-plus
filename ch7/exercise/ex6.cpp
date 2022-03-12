/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 20:27:48
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 21:29:28
 * @FilePath     : ex6.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

using namespace std;

const int MAX = 10;

int fill_array(double *, int);
void show_array(double *, int);
void reverse_array(double *, int);

int main(int argc, char const *argv[])
{
    double arr[MAX];

    int size = fill_array(arr, MAX);
    show_array(arr, size);
    reverse_array(arr, size);
    show_array(arr, size);
    reverse_array(arr+1, size-2);
    show_array(arr, size);
    return 0;
}

int fill_array(double * arr, int max)
{
    int i;
    for (i = 0; i < max; i++)
    {
        double temp;
        cout << "Enter a element of array: " << endl;
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Invalid input, terminated." << endl;
            break;
        }
        else
        {
            arr[i] = temp;
        }
    }
    return i;
}

void show_array(double *arr, int size)
{
    cout << "The array content: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse_array(double * arr, int size)
{
    double temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}