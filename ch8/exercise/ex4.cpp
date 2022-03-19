/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 16:41:08
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 16:50:18
 * @FilePath     : ex4.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>

using namespace std;

struct stringy
{
    char *str;          // points to a string
    int ct;             // length of string (not counting '\0')
};

// prototypes for set(), show() and show() go here
const stringy &set(stringy &stry, const char *str);
void show(const stringy &stry, int n = 1);
void show(const char *str, int n=1);


int main(int argc, char const *argv[])
{
    stringy beany;
    char testing[] = "Reality isn't what is used to be.";
    set(beany, testing);            // first argument is a reference
                                    // allocates space to hold copy of testing
                                    // sets str member of beany to point to the
                                    // new block, copies testing to new block
                                    // and sets ct member of beany
    show(beany);                    // prints member string once
    show(beany, 2);                 // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);                  // prints testing string once
    show(testing, 3);               // prints testing string thrice
    show("Done!");
    return 0;
}


const stringy & set(stringy &stry, const char *str)
{
    stry.ct = strlen(str);
    stry.str = new char[stry.ct];
    strcpy(stry.str, str);
    return stry;
}

void show(const stringy &stry, int n)
{
    show(stry.str, n);
}

void show(const char *str, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << str << endl;
    }
}
