/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 23:00:06
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 23:05:40
 * @FilePath     : studentc.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "studentc.h"

using namespace std;

std::ostream &Student::arr_out(std::ostream &os) const
{
    int i;
    int lim = scores.size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << scores[i] << " ";
            if (i % 5 == 4)
            {
                os << std::endl;
            }
        }
        if (i % 5 != 0)
        {
            os << std::endl;
        }
    }
    else
    {
        os << " empty array ";
    }
    return os;
}

double Student::Average() const
{
    if (scores.size() == 0)
    {
        return 0.0;
    }
    else
    {
        return scores.sum() / scores.size();
    }
}

const std::string &Student::Name() const
{
    return name;
}

double &Student::operator[](int i)
{
    return scores[i];
}

double Student::operator[](int i) const
{
    return scores[i];
}

// friends
// input
std::istream &operator>>(std::istream &is, Student &stu)
{
    is >> stu.name;
    return is;
}

std::istream &getline(std::istream &is, Student &stu)
{
    std::getline(is, stu.name);
    return is;
}


// output
std::ostream &operator<<(std::ostream &os, const Student &stu)
{
    os << "Scores for " << stu.name << ":" << std::endl;
    stu.arr_out(os);
    return os;
}
