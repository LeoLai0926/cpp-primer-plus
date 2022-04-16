/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 21:26:08
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 22:58:45
 * @FilePath     : studentc.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__STUDENTC_H__)
#define __STUDENTC_H__

#include <iostream>
#include <valarray>
#include <string>

using namespace std;

class Student
{
private:
    typedef valarray<double> ArrayDb;
    std::string name;
    ArrayDb scores;
    // private method for scores output
    std::ostream & arr_out(std::ostream & os) const;
public:
    Student() : name("Null Student"), scores() {}
    explicit Student(const std::string & s) : name(s), scores() {}
    explicit Student(int n) : name("Nully"), scores(n) {}
    Student(const std::string & s, int n)
        : name(s), scores(n) {}
    Student(const std::string & s, const ArrayDb & a)
        : name(s), scores(a) {}
    Student(const char * str, const double * pd, int n)
        : name(str), scores(pd, n) {}
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

#endif // __STUDENTC_H__
