/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-19 21:00:44
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-19 21:01:49
 * @FilePath     : 5.11_compstr1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <cstring>      // prototype for strcmp()

int main(int argc, char const *argv[])
{
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }

    cout << "After loop ends, word is " << word << endl;

    return 0;
}
