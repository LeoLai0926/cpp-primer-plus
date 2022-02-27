/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-27 20:55:02
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-27 20:58:16
 * @FilePath     : 6.12_jump.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

const int ArSize = 80;

int main(int argc, char const *argv[])
{
    using namespace std;
    char line[ArSize];
    int spaces = 0;

    cout << "Enter a line of text: \n";
    cin.get(line, ArSize);
    cout << "Complete line:\n" << line << endl;
    cout << "Line through first period:\n";
    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i];            // display character
        if (line[i] == '.')         // quit if it's a period
            break;
        if (line[i] != ' ')         // skip rest of loop
            continue;
        spaces++;
    }

    cout << endl << spaces << " spaces" << endl;
    cout << "Done!" << endl;
    return 0;
}
