/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-05-30 22:57:19
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-05-30 23:02:32
 * @FilePath     : tempparm.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include "stcktp1.h"

template <template <typename T> class Thing>
class Crab
{
private:
    Thing<int> s1;
    Thing<double> s2;
public:
    Crab() {};
    // assumes the thing class has push() and pop() members
    bool push(int a, double x) { return s1.push(a) && s2.push(x); }
    bool pop(int & a, double & x) { return s1.pop(a) && s2.pop(x); }
};


int main(int argc, char const *argv[])
{
    using namespace std;
    Crab<Stack> nebula;
    // stack must match template <typename T> class thing
    int ni;
    double nb;
    cout << "Enter int double pairs, such as 4 3.5 (0 0 to end):" << endl;
    while (cin >> ni >> nb && ni > 0 && nb > 0)
    {
        if (!nebula.push(ni, nb))
        {
            break;
        }
    }
    while (nebula.pop(ni, nb))
    {
        cout << ni << ", " << nb << endl;
    }
    cout << "Done." << endl;
    return 0;
}
