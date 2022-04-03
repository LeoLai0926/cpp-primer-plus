/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 10:48:27
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 11:01:28
 * @FilePath     : complex.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "complex.h"

using namespace std;

namespace COMPLEX
{
    Complex operator+(const Complex &c1, const Complex &c2)
    {
        return Complex(c1.real + c2.real, c1.imag + c2.imag);
    }

    Complex operator-(const Complex &c1, const Complex &c2)
    {
        return Complex(c1.real - c2.real, c1.imag - c2.imag);
    }

    Complex operator*(const Complex &c1, const Complex &c2)
    {
        return Complex(c1.real * c2.real - c1.imag * c2.imag,
                        c1.real * c2.imag + c1.imag * c2.real);
    }

    Complex operator*(double n, const Complex &c)
    {
        return Complex(n * c.real, n * c.imag);
    }

    Complex operator*(const Complex &c, double n)
    {
        return Complex(n * c.real, n * c.imag);
    }

    Complex operator~(const Complex &c)
    {
        return Complex(c.real, -c.imag);
    }

    ostream &operator<<(ostream &os, const Complex &c)
    {
        os << "(" << c.real << ", " << c.imag << "i)";
        return os;
    }

    istream &operator>>(istream &is, Complex &c)
    {
        is >> c.real >> c.imag;
        return is;
    }
} // namespace COMPLEX
