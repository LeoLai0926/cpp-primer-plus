/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-29 21:34:53
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 08:43:18
 * @FilePath     : vector.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__VECTOR_H__)
#define __VECTOR_H__

#include <iostream>

namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode
        {
            RECT,
            POL
        };

    private:
        double x;
        double y;
        Mode mode;
        double set_mag() const;
        double set_ang() const;
        void set_x(double mag, double ang);
        void set_y(double mag, double ang);

    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        double xval() const { return x; }
        double yval() const { return y; }
        double magval() const { return set_mag(); }
        double angval() const { return set_ang(); }
        void polar_mode();
        void rect_mode();

        Vector operator+(const Vector &v) const;
        Vector operator-(const Vector &v) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        friend Vector operator*(double n, const Vector &v);
        friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    };
}

#endif // __VECTOR_H__
