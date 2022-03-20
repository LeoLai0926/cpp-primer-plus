/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-20 17:28:12
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-20 17:30:26
 * @FilePath     : ex2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>

// function prototype
void strcount(const std::string str);

int main(int argc, char const *argv[])
{
    using namespace std;
    string input;

    cout << "Enter a line: " << endl;
    getline(cin, input);
    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit): " << endl;
        getline(cin, input);
    }

    cout << "Bye." << endl;
    return 0;
}

void strcount(const std::string str)
{
    using namespace std;
    static int total = 0; // static local variable
    int count = str.size();        // automatic local variable
    total += count;

    cout << count << " characters" << endl;
    cout << total << " characters total" << endl;
}
