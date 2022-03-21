<!--
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 21:14:01
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 21:32:59
 * @FilePath     : review.md
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
-->


# Review

## 1

类是用户自定义的数据类型，类中可以存储数据以及如何操作数据的方法。

## 2

类只是描述了对象的模板，并未具体实例化类对象
类中包含了数据与操作数据的方法，并且仅将方法公开
类中的数据为私有

## 3

等同于标准类型与变量的关系

## 4

所有的成员函数均为同一个，而成员数据并不是。

## 5
```cpp
#include <string>

class Account
{
private:
    std::string name;
    std::string username;
    double deposit;
public:
    Account(const std::string &client, const std::string &id, double dep=0.0);
    ~Account();
    void show() const;
    void save(double amount);
    void withdraw(double amount);
};

```

## 6

构造函数：在创建类对象时或是显式调用时。
析构函数：在类对象被销毁时自动调用。

## 7

```cpp
Account::Account(const std::string &client, const std::string &id, double dep)
{
    name = client;
    username = id;
    deposit = dep;
}
```

## 8

默认构造函数为没有参数或构造函数中所有参数均有默认值的函数。

可以声明对象但不初始化

## 9

```cpp
class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    Stock(); // default constructor
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock(); // noisy destructor

    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock &topVal(const Stock &s) const;

    const std::string &getCompany() const { return company; }
    const long &getShares() const { return shares; }
    const double &getShareVal() const { return share_val; }
    const double &getTotalVal() const { return total_val; }
};
```


## 10

this 为指向当前调用成员函数的对象的指针

*this 为当前调用成员函数的对象本身