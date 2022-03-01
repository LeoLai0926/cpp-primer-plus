/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-02 00:03:18
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-02 00:05:27
 * @FilePath     : 7.1_calling.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

void simple();              // function prototype

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "main() will call the simple() function: " << endl;
    simple();               // function call
    cout << "main() is finished with the simple() function." << endl;
    // cin.get()

    return 0;
}

// function definition
void simple()
{
    using namespace std;
    cout << "I'm but a simple function." << endl;
}