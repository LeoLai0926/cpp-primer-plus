/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 21:18:57
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 21:21:02
 * @FilePath     : ex9.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>

using namespace std;

const char DONE[] = "done";

int main(int argc, char const *argv[])
{
    string words;
    int counter = 0;

    cout << "Enter wors (to stop, type the word done): " << endl;
    do
    {
        cin >> words;
        cin.get();
        counter++;
    } while (words != DONE);

    cout << "You entered a total of " << counter - 1 << " words." << endl;
    return 0;
}
