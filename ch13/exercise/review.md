<!--
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-13 20:15:23
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-13 20:49:38
 * @FilePath     : review.md
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
-->

# Review

## 1

基类的公有成员成为派生类的公有成员。基类的保护成员成为派生类的保护成员。基类的私有成员被继承，但不能直接访问

## 2

不能继承构造函数、析构函数、赋值运算符和友元

## 3

1. 不能使用连锁赋值
2. 将返回对象，会影响效率

## 4

按照派生的顺序调用构造函数，最早的构造函数最先调用。析构函数的调用相反

## 5

是的。每个类都必须有自己的构造函数。如果没有添加新的成员，构造函数可以为空，但必须存在。

## 6

只调用派生类的方法。

## 7

如果派生类的构造函数使用了 `new` 或 `new []` 运算符来初始化累的指针成员，则应该定义一个赋值运算符。

## 8

可以；只有指定了显示的类型转换才可以；

## 9

可以将派生类对象赋值给基类对象。反之必须定义转换运算符或使用基类为参数的运算符。

## 10

可以

## 11

按值传递将调用复制构造函数，由于形参是基类对象，因此将调用基类的复制构造函数。复制构造函数以基类引用为参数，该引用可以指向作为参数传递的派生对象。

## 12

按引用传递可以节省内存和时间

## 13

a. 调用Corporation的成员方法
b. 调用PublicCorporation的成员方法

## 14

1. House 无法直接访问 `kit_sq_ft`
2. House 的构造函数未显式调用基类的构造函数
3. `all_sq_ft` 未进行初始化
4. House 中的 area 隐藏了 Kitchen 中的 area

