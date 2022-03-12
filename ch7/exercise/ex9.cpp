/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 21:52:24
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 22:01:38
 * @FilePath     : ex9.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa [], int n);

void display1(student st);

void display2(const student * ps);

void display3(const student pa [], int n);

int main(int argc, char const *argv[])
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
    {
        continue;
    }

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done." << endl;
    return 0;
}

int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the name of student: ";
        cin >> pa[i].fullname;
        cout << "Enter the hobby of the student: ";
        cin >> pa[i].hobby;
        cout << "Enter the ooplevel of the student: ";
        cin >> pa[i].ooplevel;

        if (!cin)
        {
            cin.clear();
            while(cin.get() != '\n');
            break;
        }
    }
    return i;
}

void display1(student st)
{
    cout << "Name: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "Level: " << st.ooplevel << endl;
}

void display2(const student *ps)
{
    cout << "Name: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "Level: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Student #" << i+1 << endl;
        display2(&pa[i]);
    }
}