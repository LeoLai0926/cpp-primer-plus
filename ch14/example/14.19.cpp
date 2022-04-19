/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-19 23:27:53
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-19 23:36:03
 * @FilePath     : 14.19.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>
#include <string>

template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const { return a; }
    T2 second() const { return b; }
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {}
    Pair() {}
};

template <class T1, class T2>
T1 & Pair<T1, T2>::first()
{
    return a;
}

template <class T1, class T2>
T2 &Pair<T1, T2>::second()
{
    return b;
}


int main(int argc, char const *argv[])
{
    Pair<std::string, int> ratings[4] =
    {
        Pair<std::string, int>("The Purpled Duck", 5),
        Pair<std::string, int>("Jaquie's Frisco Al Fresco", 4),
        Pair<std::string, int>("Cafe Souffle", 5),
        Pair<std::string, int>("Bertie's Eats", 3),
    };

    int joints = sizeof(ratings) / sizeof(Pair<std::string, int>);
    std::cout << "Rating:\t Eatery" << std::endl;
    for (int i = 0; i < joints; i++)
    {
        std::cout << ratings[i].second() << ":\t "
                  << ratings[i].first() << std::endl;
    }
    std::cout << "Oops! Revised rating:" << std::endl;
    ratings[3].first() = "Bertie's Fab Eats";
    ratings[3].second() = 6;
    std::cout << ratings[3].second() << ":\t "
              << ratings[3].first() << std::endl;
    return 0;
}

