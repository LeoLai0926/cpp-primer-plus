/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-03 10:42:27
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 10:59:51
 * @FilePath     : complex.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__COMPLEX_H__)
#define __COMPLEX_H__

#include <iostream>

namespace COMPLEX
{
    class Complex
    {
    private:
        double real;
        double imag;

    public:
        Complex()
        {
            real = 0.0;
            imag = 0.0;
        };
        Complex(double r, double i)
        {
            real = r;
            imag = i;
        };
        ~Complex(){};

        friend Complex operator+(const Complex &c1, const Complex &c2);
        friend Complex operator-(const Complex &c1, const Complex &c2);
        friend Complex operator*(const Complex &c1, const Complex &c2);
        friend Complex operator*(double n, const Complex &c);
        friend Complex operator*(const Complex &c, double n);
        friend Complex operator~(const Complex &c);
        friend std::ostream &operator<<(std::ostream &os, const Complex &c);
        friend std::istream &operator>>(std::istream &is, Complex &c);
    };
} // namespace COMPLEX

#endif // __COMPLEX_H__
