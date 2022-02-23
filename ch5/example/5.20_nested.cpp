/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-22 00:31:35
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-22 00:36:39
 * @FilePath     : 5.20_nested.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

const int Cities = 5;
const int Years = 4;

int main(int argc, char const *argv[])
{
    using namespace std;
    const char * cities[Cities] =           // array of pointers
    {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };

    int maxtemps[Years][Cities] =           // 2-D array
    {
        {96, 100, 87, 101, 105},            // values for maxtemps[0]
        {96, 98, 91, 107, 104},             // values for maxtemps[0]
        {97, 101, 93, 108, 107},            // values for maxtemps[0]
        {98, 103, 95, 109, 108},            // values for maxtemps[0]
    };

    cout << "Maximum temperatures for 2008 - 2011" << endl << endl;
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
        {
            cout << maxtemps[year][city] << "\t";
        }
        cout << endl;
    }

        // cin.get()

    return 0;
}
