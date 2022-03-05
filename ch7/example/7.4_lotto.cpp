/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-05 09:10:23
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-05 09:20:15
 * @FilePath     : 7.4_lotto.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

using namespace std;

// Note: some implementations require double instead of long double
long double probability(int numbers, int picks);

int main(int argc, char const *argv[])
{

    int numbers, picks;
    cout << "Enter the total number of choices on the game card"
            " and the number of picks allowed: " << endl;
    while ((cin >> numbers >> picks) && (picks <= numbers))
    {
        long double prob = probability(numbers, picks);             // compute the odds
        cout << "You have one chance in " << prob <<" of wining." << endl;
        cout << "Next two number(q to quit): ";
    }
    cout << "Bye." << endl;

    return 0;
}


// The following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(int numbers, int picks)
{
    double n, p;                                                    // here come some local variables
    long double prob = 1.0;
    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        prob = prob * (n / p);
    }
    return prob;
}