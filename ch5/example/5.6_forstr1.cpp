/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-17 19:57:20
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-17 19:58:42
 * @FilePath     : 5.6_forstr1.cpp
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

    // display letters i reverse order
    for (int i = word.size() - 1; i >= 0; i--)
    {
        cout << word[i];
    }
    cout << endl << "Bye." << endl;
    return 0;
}
