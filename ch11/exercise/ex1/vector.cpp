/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-29 21:52:37
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 00:35:48
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

    void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }

    void Vector::set_ang()
    {
        if (x == 0.0 && y == 0.0)
        {
            ang = 0.0;
        }
        else
        {
            ang = atan2(y, 2);
        }
    }

    void Vector::set_x()
    {
        x = mag * cos(ang);
    }

    void Vector::set_y()
    {
        y = mag * sin(ang);
    }


    Vector::Vector()
    {
        x = y = mag = ang = 0.0;
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
            mag = n1;
            ang = n2 / RAD2DEG;
            set_x();
            set_y();
        }
        else
        {
            cout << "Error" << endl;
            x = y = mag = ang = 0;
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
            mag = n1;
            ang = n2 / RAD2DEG;
            set_x();
            set_y();
        }
        else
        {
            cout << "Error" << endl;
            x = y = mag = ang = 0;
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
            os << "(x, y) = " << "(" << v.x << ", " << v.y << ")";
        }
        else if (v.mode == Vector::POL)
        {
            os << "(mag, ang) = " << "(" << v.mag << ", " << v.ang << ")";
        }
        else
        {
            os << "Invalid mode" << endl;
        }

        return os;
    }
}