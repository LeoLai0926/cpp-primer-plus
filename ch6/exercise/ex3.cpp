/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-01 20:15:01
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-01 20:24:06
 * @FilePath     : ex3.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

using namespace std;

void showmenu()
{
    cout << "Please enter one of the following choices:\n"
            "c) carnivore\tp) pianist\n"
            "t) tree\t\tg) game" << endl;
}

int main(int argc, char const *argv[])
{

    char ch;
    showmenu();
    cin.get(ch);
    while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
    {
        cin.get();
        cout << "Please enter a c, p, t or g: ";
        cin.get(ch);
    }

    switch (ch)
    {
    case 'c':
        cout << "Carnivore selected." << endl;
        break;
    case 'p':
        cout << "Pianist selected." << endl;
        break;
    case 't':
        cout << "A maple is a tree" << endl;
        break;
    case 'g':
        cout << "Game is selected" << endl;
        break;
    default:
        break;
    }
    return 0;
}
