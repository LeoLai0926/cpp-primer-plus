/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-18 22:14:56
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-19 22:51:39
 * @FilePath     : arraytp.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__ARRAYTP_H__)
#define __ARRAYTP_H__

#include <iostream>
#include <cstdlib>

template <class T, int n>
class ArrayTP
{
private:
    T ar[n];
public:
    ArrayTP() {};
    explicit ArrayTP(const T & v);
    virtual T & operator[](int i);
    virtual T operator[](int i) const;
};


template <class T, int n>
ArrayTP<T, n>::ArrayTP(const T &v)
{
    for (int i = 0; i < n; i++)
    {
        ar[i] = v;
    }
}

template <class T, int n>
T &ArrayTP<T, n>::operator[](int i)
{
    if (i < 0 || i >= n)
    {
        std::cerr << "Error in array limits: " << i << " is out of range" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}


template <class T, int n>
T ArrayTP<T, n>::operator[](int i) const
{
    if (i < 0 || i >= n)
    {
        std::cerr << "Error in array limits: " << i << " is out of range" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}

#endif // __ARRAYTP_H__
