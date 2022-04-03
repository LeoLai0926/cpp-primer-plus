/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-29 21:52:37
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 08:48:03
 * @FilePath     : vector.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <cmath>
#include "vector.h"

using namespace std;

namespace VECTOR
{

    const double RAD2DEG = 180 / M_PI;

    double Vector::set_mag() const
    {
        return sqrt(x * x + y * y);
        ;
    }

    double Vector::set_ang() const
    {
        double ang;
        if (x == 0.0 && y == 0.0)
        {
            ang = 0.0;
        }
        else
        {
            ang = atan2(y, 2);
        }
        return ang;
    }

    void Vector::set_x(double mag, double ang)
    {
        x = mag * cos(ang);
    }

    void Vector::set_y(double mag, double ang)
    {
        y = mag * sin(ang);
    }


    Vector::Vector()
    {
        x = y = 0.0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            double mag = n1;
            double ang = n2 / RAD2DEG;
            set_x(mag, ang);
            set_y(mag, ang);
        }
        else
        {
            cout << "Error" << endl;
            x = y = 0;
        }
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            double mag = n1;
            double ang = n2 / RAD2DEG;
            set_x(mag, ang);
            set_y(mag, ang);
        }
        else
        {
            cout << "Error" << endl;
            x = y = 0;
        }
    }

    void Vector::polar_mode()
    {
        mode = POL;
    }

    void Vector::rect_mode()
    {
        mode = RECT;
    }


    Vector Vector::operator+(const Vector &v) const
    {
        return Vector(x + v.x, y + v.y);
    }

    Vector Vector::operator-(const Vector &v) const
    {
        return Vector(x - v.x, y - v.y);
    }

    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    Vector operator*(double n, const Vector &v)
    {
        return v * n;
    }

    std::ostream &operator<<(std::ostream &os, const Vector &v)
    {
        if (v.mode == Vector::RECT)
        {
            os << "x, y = " << v.x << ", " << v.y;
        }
        else if (v.mode == Vector::POL)
        {
            os << "mag, ang = " << v.magval() << ", " << v.angval();
        }
        else
        {
            os << "Invalid mode" << endl;
        }

        return os;
    }
}