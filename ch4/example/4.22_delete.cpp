/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-13 18:52:04
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-13 19:16:01
 * @FilePath     : 4.22_delete.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>          // or string.h

using namespace std;

char * getname(void);       // function prototype

int main(int argc, char const *argv[])
{
    char * name;            // create pointer but no storage
    name = getname();       // assign address of string to name
    cout << name << " at " << (int *) name << endl;
    delete [] name;

    name = getname();       // reuse freed memory;
    cout << name << " at " << (int *) name << endl;
    delete [] name;         // memory freed again

    return 0;
}


char * getname()            // return pointer to new string
{
    char temp[80];          // temporary storage
    cout << "Enter last name: ";
    cin.getline(temp, 80);
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);       // copy striong into smaller space

    return pn;              // temp lost when function ends
}