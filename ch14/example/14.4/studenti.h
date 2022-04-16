/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 21:26:08
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 23:38:34
 * @FilePath     : studenti.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__STUDENTI_H__)
#define __STUDENTI_H__

#include <iostream>
#include <valarray>
#include <string>

using namespace std;

class Student : private std::string, private valarray<double>
{
private:
    typedef valarray<double> ArrayDb;
    // std::string name;
    // ArrayDb scores;
    // private method for scores output
    std::ostream & arr_out(std::ostream & os) const;
public:
    Student() : std::string("Null Student"), ArrayDb() {}
    explicit Student(const std::string &s) : std::string(s), ArrayDb() {}
    explicit Student(int n) : std::string("Nully"), ArrayDb(n) {}
    Student(const std::string &s, int n)
        : std::string(s), ArrayDb(n) {}
    Student(const std::string &s, const ArrayDb &a)
        : std::string(s), ArrayDb(a) {}
    Student(const char *str, const double *pd, int n)
        : std::string(str), ArrayDb(pd, n) {}
    ~Student() {}

    double Average() const;
    const std::string & Name() const;
    double & operator[](int i);
    double operator[](int i) const;
// friends
    // input
    friend std::istream & operator>>(std::istream & is, Student & stu);
    friend std::istream & getline(std::istream & is, Student & stu);

    // output
    friend std::ostream & operator<<(std::ostream & os, const Student & stu);

};

#endif // __STUDENTI_H__
