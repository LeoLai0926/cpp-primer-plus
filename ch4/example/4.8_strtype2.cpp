/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-10 13:43:05
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-10 13:46:34
 * @FilePath     : 4.8_strtype2.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    using namespace std;

    string s1 = "penguin";
    string s2, s3;

    cout << "You can assign one string object to another: s2 = s1" << endl;
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C-style string to a string object." << endl;
    cout << "s2 = \"buzzard\"" << endl;
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2" << endl;
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can append strings." << endl;
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;

    return 0;
}
