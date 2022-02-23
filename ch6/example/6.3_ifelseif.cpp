/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 00:29:30
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 00:31:49
 * @FilePath     : 6.3_ifelseif.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

const int Fave = 27;

int main(int argc, char const *argv[])
{
    using namespace std;
    int n;

    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "Too low, guess again: ";
        else if (n > Fave)
            cout << "Too high, guess again: ";
        else
            cout << Fave << " is right!" << endl;
    } while (n != Fave);

    return 0;
}
