/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-17 01:44:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-17 11:14:42
 * @FilePath     : workermi.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include "workermi.h"

using namespace std;

// Worker methods
Worker::~Worker() {}

void Worker::Data() const
{
    std::cout << "Name: " << fullname << std::endl;
    std::cout << "Employee ID: " << id << std::endl;
}

void Worker::Get()
{
    std::getline(std::cin, fullname);
    std::cout << "Enter worker's ID: ";
    std::cin >> id;
    while (std::cin.get() != '\n')
    {
        continue;
    }
}

// Waiter methods

void Waiter::Set()
{
    std::cout << "Enter waiter's name: ";
    Worker::Get();
    Get();
}

void Waiter::Show() const
{
    std::cout << "Category: waiter" << std::endl;
    Worker::Data();
    Data();
}

// protected method

void Waiter::Data() const
{
    std::cout << "Panache rating: " << panache << std::endl;
}

void Waiter::Get()
{
    std::cout << "Enter waiter's panache rating: ";
    std::cin >> panache;
    while (std::cin.get() != '\n')
    {
        continue;
    }
}
// Singer methods

char * Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
    std::cout <<  "Enter singer's name: ";
    Worker::Get();
    Get();
}

void Singer::Show() const
{
    std::cout << "Category: singer" << std::endl;
    Worker::Data();
    Data();
}


// protect methods
void Singer::Data() const
{
    std::cout << "Vocal range: " << pv[voice] << std::endl;
}

void Singer::Get()
{
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

// SingingWaiter methods
void SingingWaiter::Data() const
{
    Singer::Data();
    Waiter::Data();
}

void SingingWaiter::Get()
{
    Singer::Get();
    Waiter::Get();
}

void SingingWaiter::Set()
{
    std::cout << "Enter singing waiter's name: ";
    Worker::Get();
    Get();
}

void SingingWaiter::Show() const
{
    std::cout << "Category: singing waiter" << std::endl;
    Worker::Data();
    Data();
}
