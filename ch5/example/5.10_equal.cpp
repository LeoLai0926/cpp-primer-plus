/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-18 23:20:29
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-18 23:24:10
 * @FilePath     : 5.10_equal.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int quizscores[10] =
    {
        20, 20, 20, 20, 20, 19, 20, 18, 20, 20
    };

    int i;

    cout << "Doing it right: " << endl;
    for (i = 0; quizscores[i] == 20; i++)
    {
        cout << "quiz " << i << " is a 20" << endl;
    }

    // Warning: you may prefer reading about
    // this program to actually running it
    cout << "Doing it dangerously wrong: " << endl;
    for (i = 0; quizscores[i] = 20; i++)
    {
        cout << "quiz " << i << " is a 20" << endl;
    }
    return 0;
}
