/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-23 21:04:33
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-23 21:16:40
 * @FilePath     : ex8.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <cstring>

using namespace std;

const char DONE[] = "done";

int main(int argc, char const *argv[])
{
    char words[20];
    int counter = 0;

    cout << "Enter wors (to stop, type the word done): " << endl;
    do
    {
        cin >> words;
        cin.get();
        counter++;
    } while (strcmp(words, DONE) != 0);

    cout << "You entered a total of " << counter - 1 << " words." << endl;
    return 0;
}
