/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-17 01:36:44
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-17 01:43:34
 * @FilePath     : worker0.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__WORKER0_H__)
#define __WORKER0_H__

#include <string>

class Worker
{
private:
    std::string fullname;
    long id;
public:
    Worker() : fullname("noname"), id(0L) {}
    Worker(const std::string & s, long n)
        : fullname(s), id(n) {}
    virtual ~Worker() = 0;          // pure virtual destructure
    virtual void Set();
    virtual void Show() const;
};


class Waiter : public Worker
{
private:
    int panache;
public:
    Waiter() : Worker(), panache(0) {}
    Waiter(const std::string & s, long n, int p = 0)
        : Worker(s, n), panache(p) {}
    Waiter(const Worker & wk, int p=0)
        : Worker(wk), panache(p) {}
    void Set();
    void Show() const;
};


class Singer : public Worker
{
protected:
    enum {other, alto, contralto, soprano, bass, baritone, tenor};
    enum {Vtypes = 7};
private:
    static char * pv[Vtypes];               // string equivs of voice types
    int voice;
public:
    Singer() : Worker(), voice(other) {}
    Singer(const std::string & s, long n, int v = other)
        : Worker(s, n), voice(v) {}
    Singer(const Worker & wk, int v = other)
        : Worker(wk), voice(v) {}
    void Set();
    void Show() const;
};

#endif // __WORKER0_H__
