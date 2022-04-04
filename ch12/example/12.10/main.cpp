/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-04 11:22:02
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-04 16:10:26
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

using namespace std;

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(int argc, char const *argv[])
{
    // setting things up
    srand(time(0));

    cout << "Case Study: Bank of Heather Automatic Teller" << endl;
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);

    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;

    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours;

    cout << "Enter the average number of customers per hour: ";
    double perhour;             // average # of arrival per hour
    cin >> perhour;
    double min_per_cust;        // average time between arrivals
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;

    // running the simulation
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))
        {
            if (line.isfull())
            {
                turnaways++;
            }
            else
            {
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }
        }

        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue(temp);
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }

        if (wait_time > 0)
        {
            wait_time--;
        }

        sum_line += line.queuecount();
    }

    // reporting results
    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << double(sum_line) / cyclelimit << endl;
        cout << "average wait time: "
             << double(line_wait) / served << " minutes" << endl;
    }
    else
    {
        cout << "No customers." << endl;
    }

    cout << "Done." << endl;

    return 0;
}

// x = averqage time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (rand() * x / RAND_MAX < 1);
}