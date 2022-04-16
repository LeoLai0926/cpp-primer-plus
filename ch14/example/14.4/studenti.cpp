/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 23:00:06
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 23:43:31
 * @FilePath     : studenti.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "studenti.h"

using namespace std;

std::ostream &Student::arr_out(std::ostream &os) const
{
    int i;
    int lim = ArrayDb::size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << ArrayDb::operator[](i) << " ";
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
    if (ArrayDb::size() == 0)
    {
        return 0.0;
    }
    else
    {
        return ArrayDb::sum() / ArrayDb::size();
    }
}

const std::string &Student::Name() const
{
    return (const std::string &) *this;
}

double &Student::operator[](int i)
{
    return ArrayDb::operator[](i);
}

double Student::operator[](int i) const
{
    return ArrayDb::operator[](i);
}

// friends
// input
std::istream &operator>>(std::istream &is, Student &stu)
{
    is >> (std::string &) stu;
    return is;
}

std::istream &getline(std::istream &is, Student &stu)
{
    std::getline(is, (std::string &)stu);
    return is;
}


// output
std::ostream &operator<<(std::ostream &os, const Student &stu)
{
    os << "Scores for " << (const std::string &) stu << ":" << std::endl;
    stu.arr_out(os);
    return os;
}
