/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-01 20:25:37
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-01 20:44:57
 * @FilePath     : ex4.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

using namespace std;

const int strsize = 40;
const int usersize = 4;

// Benevolent Order of Programmers name structures
struct bop
{
    char fullname[strsize];         // real name
    char title[strsize];            // job title
    char bopname[strsize];          // secret BOP name
    int preference;                 // 0 = fullname, 1 = title, 2 = bopname
};

bop user[usersize] =
{
    {"Rick", "Level_A", "RR", 0},
    {"Jack", "Level_B", "JJ", 1},
    {"Micheal", "Level_C", "MM", 2},
    {"Tim", "Level_D", "TT", 0}
};

void showmenu();
void print_by_fullname();
void print_by_title();
void print_by_bopname();
void print_by_pref();

int main(int argc, char const *argv[])
{
    showmenu();
    char ch;
    cin.get(ch);
    while (ch != 'q')
    {
        switch (ch)
        {
            case 'a': print_by_fullname(); break;
            case 'b': print_by_title(); break;
            case 'c': print_by_bopname(); break;
            case 'd': print_by_pref(); break;
            default: cout << "Please enter character a, b, c, d, q: ";
        }
        cin.get();
        cout << "Next input: ";
        cin.get(ch);
    }
    cout << "Bye!" << endl;
    return 0;
}


void showmenu()
{
    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name\t\tb. display by title\n"
            "c. display by bopname\t\td. display by preference\n"
            "q. quit" << endl;
}

void print_by_fullname()
{
    for (int i = 0; i < usersize; i++)
    {
        cout << user[i].fullname << endl;
    }
}

void print_by_title()
{
    for (int i = 0; i < usersize; i++)
    {
        cout << user[i].title << endl;
    }
}
void print_by_bopname()
{
    for (int i = 0; i < usersize; i++)
    {
        cout << user[i].bopname << endl;
    }
}

void print_by_pref()
{
    for (int i = 0; i < usersize; i++)
    {
        switch (user[i].preference)
        {
        case 0:
            cout << user[i].fullname << endl;
            break;
        case 1:
            cout << user[i].title << endl;
            break;
        case 2:
            cout << user[i].bopname << endl;
            break;
        default:
            break;
        }
    }
}