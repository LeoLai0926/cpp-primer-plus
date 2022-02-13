/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-13 10:30:05
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-13 11:44:47
 * @FilePath     : 4.20_ptrstr.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cstring>      // declare strlen(), strcpya()

int main(int argc, char const *argv[])
{
    using namespace std;
    char animal [20] = "bear";      // animal holds bear
    const char * bird = "wern";     // bird holds address of string
    char * ps;                      // uninitialized

    cout << animal << " and ";      // display bear
    cout << bird << endl;           // display wern
    // cout << ps << endl;          // may display garbage, may cause a crash

    cout << "Enter a kind of animal: ";
    cin >> animal;                  // ok is input < 20 chars
    // cin >> ps;                   // Too horrible a blunder to try;
                                    // ps doesn't point to allocated space

    ps = animal;                    // set ps to point to string
    cout << ps << endl;             // ok, same as using animal
    cout << "Before using strcpy(): " << endl;
    cout << animal << " in animal at " << (int *) animal << endl;
    cout << ps << " is ps at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];      // get new storage
    strcpy(ps, animal);             // copy string to new storage
    cout << "After using strcpy(): " << endl;
    cout << animal << " in animal at " << (int *) animal << endl;
    cout << ps << " in ps at " << (int *) ps << endl;
    delete [] ps;
    return 0;
}
