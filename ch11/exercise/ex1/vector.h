/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-29 21:34:53
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-29 22:41:44
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
        double mag;
        double ang;
        Mode mode;
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();

    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        double xval() const { return x; }
        double yval() const { return y; }
        double magval() const { return mag; }
        double angval() const { return ang; }
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
