/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-10 16:31:19
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-10 16:32:46
 * @FilePath     : 4.15_pointer.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int updates = 6;        // declare a variable
    int * p_updates;         // declare pointer to an int
    p_updates = &updates;    // assign address of int to pointer

    // express values two ways
    cout << "Values: updates = " << updates;
    cout <<", *p_updates = " << *p_updates << endl;

    // use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    return 0;
}
