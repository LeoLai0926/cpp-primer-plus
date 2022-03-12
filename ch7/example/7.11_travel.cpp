/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 09:58:22
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 10:03:07
 * @FilePath     : 7.11_travel.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

struct TravelTime
{
    int hours;
    int mins;
};

const int MINS_PER_HR = 60;

TravelTime sum(TravelTime t1, TravelTime t2);
void show_time(TravelTime t);

int main(int argc, char const *argv[])
{
    using namespace std;
    TravelTime day1 = {5, 45};                      // 5 hrs, 45 mins
    TravelTime day2 = {4, 55};                      // 4 hrs, 55 mins

    TravelTime trip = sum(day1, day2);
    cout << "Two-day trip: ";
    show_time(trip);

    TravelTime day3 = {4, 32};
    cout << "Three-day trip: ";
    show_time(sum(trip, day3));

    return 0;
}

TravelTime sum(TravelTime t1, TravelTime t2)
{
    TravelTime total;
    total.mins = (t1.mins + t2.mins) % MINS_PER_HR;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / MINS_PER_HR;
    return total;
}

void show_time(TravelTime t)
{
    using namespace std;
    cout << t.hours << " hours, "
         << t.mins << " minutes\n";
}