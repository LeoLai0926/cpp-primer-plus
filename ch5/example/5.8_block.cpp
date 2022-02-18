/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-18 20:42:53
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-18 20:45:31
 * @FilePath     : 5.8_block.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "The Amazing Accounto will sum and average ";
    cout << "five numbers for you." << endl;
    cout << "Please enter five values: " << endl;
    double number;
    double sum = 0.0;

    for (int i = 1; i <= 5; i++)
    {                               // block starts here
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }                               // block ends here
    cout << "Fice exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << "." << endl;
    cout << "The Amazing Accounto bids you adieu!" << endl;
    return 0;
}
