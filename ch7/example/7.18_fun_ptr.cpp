/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 11:37:22
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 11:41:06
 * @FilePath     : 7.18_fun_ptr.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

double betsy(int);
double pam(int);

// second argument is pointer to a type double function that
// takes a type int argument
void estimate(int lines, double (*pf)(int));

int main(int argc, char const *argv[])
{
    using namespace std;
    int code;
    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's Betsy's estimate: " << endl;
    estimate(code, betsy);
    cout << "Here's Pam's estimate: " << endl;
    estimate(code, pam);
    return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf) (int))
{
    using namespace std;
    cout << lines << " lines will take "
         << (*pf)(lines) << " hour(s)" << endl;
}