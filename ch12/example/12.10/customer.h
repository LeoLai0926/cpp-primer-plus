/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-04 10:47:54
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-04 10:55:54
 * @FilePath     : customer.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__CUSTOMER_H__)
#define __CUSTOMER_H__

class Customer
{
private:
    long arrive;
    int processtime;
public:
    Customer() { arrive = processtime = 0; }
    void set(long when);
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};


#endif // __CUSTOMER_H__
