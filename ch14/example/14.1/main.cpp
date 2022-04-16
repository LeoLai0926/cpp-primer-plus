/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 23:05:56
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 23:18:09
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "studentc.h"

using namespace std;

void set(Student & sa, int n);
const int pupils = 3;
const int quizzes = 5;

int main(int argc, char const *argv[])
{
    Student ada[pupils] =
        {Student(quizzes), Student(quizzes), Student(quizzes)};

    int i;
    for (i = 0; i < pupils; i++)
    {
        set(ada[i], quizzes);
    }
    std::cout << "\nStudent Lists: \n";
    for (i = 0; i < pupils; i++)
    {
        std::cout << ada[i].Name() << std::endl;
    }
    std::cout  << "\nResults: ";
    for (i = 0; i < pupils; i++)
    {
        std::cout << std::endl << ada[i];
        std::cout << "average: " << ada[i].Average() << std::endl;
    }
    std::cout << "Done." << std::endl;
    return 0;
}

void set(Student & sa, int n)
{
    std::cout << "Please enter the student's name: ";
    getline(std::cin, sa);
    std::cout << "Please enter " << n << " quiz scores: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> sa[i];
    }
    while (std::cin.get() != '\n')
    {
        continue;
    }
}
