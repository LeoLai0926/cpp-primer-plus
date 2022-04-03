/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 14:44:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 22:26:36
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "strngbad.h"

using namespace std;

void callme1(StringBad &);          // pass by reference
void callme2(StringBad);            // pass by value

int main(int argc, char const *argv[])
{
    {
        cout << "Starting an inner block." << endl;
        StringBad headline1("Celery Stalks at Midnights");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");
        cout << endl;

        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        cout << endl;

        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl;
        cout << endl;

        cout << "Initialize one object to another: " << endl;
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another: " << endl;
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << endl;

        cout << "Exiting the block." << endl;
    }
    cout << "End of main()" << endl;
    return 0;
}

void callme1(StringBad & rsb)
{
    cout << "String passed by reference: " << endl;
    cout << "    \"" << rsb << "\"" << endl;
}

void callme2(StringBad sb)
{
    cout << "String passed by value: " << endl;
    cout << "    \"" << sb << "\"" << endl;
}

