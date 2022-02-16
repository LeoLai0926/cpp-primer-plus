/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-15 21:45:29
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-16 20:56:14
 * @FilePath     : ex1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    char firstName [20];
    char lastName [20];
    char grade;
    int age;
    cout << "What is your first name: ";
    cin.getline(firstName, 20);
    cout << "What is your last name: ";
    cin.getline(lastName, 20);
    cout << "What letter grade do you deserve: ";
    cin >> grade;
    cout << "What is your age: ";
    cin >> age;
    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << grade + 1 << endl;
    cout << "Age: " << age << endl;

    return 0;
}
