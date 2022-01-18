/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-18 22:45:57
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-18 22:48:45
 * @FilePath     : 2.5_ourfunc.cpp
 * @Description  : 
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
void simon(int);        // function prototype for simon()

int main(int argc, char const *argv[])
{
    using namespace std;
    simon(3);           // call the simon() function
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);       // call it again
    cout << "Done!" << endl;
    return 0;
}

void simon(int n)   // define the simon() function
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
                    // void functions don't need return statements
}
