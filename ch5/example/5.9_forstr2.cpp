/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-18 20:50:09
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-18 20:52:52
 * @FilePath     : 5.9_forstr2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    getline(cin, word);

    // physically modify string object
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {                   // start block
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }                   // end block
    cout << word << endl;
    cout << "Done." << endl;

    return 0;
}
