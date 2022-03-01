/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-01 23:47:13
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-01 23:49:38
 * @FilePath     : ex8.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("alpha.txt");
    int count = 0;
    char ch;
    while (fin >> ch)
        count++;

    cout << count << " characters readin." << endl;
    fin.close();
    return 0;
}
