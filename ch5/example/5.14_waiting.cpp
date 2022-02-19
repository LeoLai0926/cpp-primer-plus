/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-19 21:41:54
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-19 21:43:48
 * @FilePath     : 5.14_waiting.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <ctime>            // describes clock() function, clock_t type

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;      // convert to clock ticks
    cout << "starting\a" << endl;
    clock_t start = clock();
    while (clock() - start < delay)             // wait until time elapses
        ;                                       // note the semicolon
    cout << "done \a" << endl;
    return 0;
}
