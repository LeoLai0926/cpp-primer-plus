/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-19 21:03:09
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-19 21:04:11
 * @FilePath     : 5.12_compstr2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <string>               // string class

int main(int argc, char const *argv[])
{
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;

    return 0;
}
