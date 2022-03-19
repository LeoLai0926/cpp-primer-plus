/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 16:25:43
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 16:40:07
 * @FilePath     : ex3.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>
#include <cctype>

const std::string &convert(std::string &str);

int main(int argc, char const *argv[])
{
    using namespace std;
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin, str);
    while (str != "q")
    {
        str = convert(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
        getline(cin, str);
    }

    cout << "Bye." << endl;
    return 0;
}

const std::string &convert(std::string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = std::toupper(str[i]);
    }
    return str;
}