/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-17 01:44:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-17 01:56:32
 * @FilePath     : worker0.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "worker0.h"

using namespace std;

// Worker methods
Worker::~Worker() {}

void Worker::Set()
{
    cout << "Enter worker's name: ";
    std::getline(std::cin, fullname);
    cout << "Enter worker's ID: ";
    std::cin >> id;
    while (std::cin.get() != '\n')
    {
        continue;
    }
}

void Worker::Show() const
{
    std::cout << "Name: " << fullname << std::endl;
    std::cout << "Employee ID: " << id << std::endl;
}

// Waiter methods

void Waiter::Set()
{
    Worker::Set();
    std::cout << "Enter waiter's panache rating: ";
    std::cin >> panache;
    while (std::cin.get() != '\n')
    {
        continue;
    }
}

void Waiter::Show() const
{
    std::cout << "Category: waiter" << std::endl;
    Worker::Show();
    std::cout << "Panache rating: " << panache << std::endl;
}

// Singer methods

char * Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
    Worker::Set();
    std::cout << "Enter number for singer's vocal range: " << std::endl;
    int i;
    for (i = 0; i < Vtypes; i++)
    {
        std::cout << i+1 << ": " << pv[i] << "  ";
        if (i % 4 == 3)
        {
            std::cout << std::endl;
        }
    }
    if (i % 4 != 0)
    {
        std::cout << std::endl;
    }

    while (std::cin >> voice && (voice < 0 || voice >= Vtypes))
    {
        std::cout << "Please enter a value >= 0 and <= " << Vtypes << std::endl;
    }

    while (std::cin.get() != '\n')
    {
        continue;
    }
}

void Singer::Show() const
{
    std::cout << "Category: singer" << std::endl;
    Worker::Show();
    std::cout << "Vocal range: " << pv[voice] << std::endl;
}