/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-02 00:07:00
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-02 00:11:26
 * @FilePath     : 7.2_protos.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

void cheers(int);               // prototype: no return value
double cube(double x);          // prototype: return a double

int main(int argc, char const *argv[])
{
    using namespace std;
    cheers(5);                  // function call
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side); // function call
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet." << endl;
    cheers(cube(2));            // prototype protection at work
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Cheers! ";
    }
    cout << endl;
}

double cube(double x)
{
    return x * x * x;
}
