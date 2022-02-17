/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-17 19:37:10
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-17 19:38:35
 * @FilePath     : 5.2_num_test.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "Enter the starting countdown values: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)         // quits when i is 0
        cout << "i = " << i << endl;
    cout << "Done now that i = " << i << endl;
    return 0;
}
