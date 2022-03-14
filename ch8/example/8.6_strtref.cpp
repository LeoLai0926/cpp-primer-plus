/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-14 11:30:06
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-14 15:01:14
 * @FilePath     : 8.6_strtref.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <string>

struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

int main(int argc, char const *argv[])
{
    // partial initializations - remaining members set to 0
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};

    // no initialization
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);

    // use return value as argument
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);

    // use return value in assignment
    dup = accumulate(team, five);
    std::cout << "Displaying team: " << std::endl;
    display(team);
    std::cout << "Displaying dup after assignment: " << std::endl;
    display(dup);
    set_pc(four);

    // ill-advised assignment
    accumulate(dup, five) = four;
    std::cout << "Displaying dup after ill-advisied assignment: " << std::endl;
    display(dup);

    return 0;
}

void display(const free_throws &ft)
{
    using namespace std;
    cout << "Name: " << ft.name << endl;
    cout << "Made: " << ft.made << "\t";
    cout << "Attempts: " << ft.attempts << "\t";
    cout << "Percent: " << ft.percent << endl;
}

void set_pc(free_throws &ft)
{
    if (ft.attempts != 0)
    {
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    }
    else
    {
        ft.percent = 0;
    }
}

free_throws &accumulate(free_throws &target, const free_throws &source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}

