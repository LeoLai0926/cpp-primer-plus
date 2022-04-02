<!--
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-02 23:55:24
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-03 00:21:05
 * @FilePath     : review.md
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
-->

# Review

## 1

```cpp
// prototype
Stonewt operator*(double mult);

// definition - let constructor do the work
Stonewt Stonewt::operator*(double mult)
{
    return Stonewt(mult * pounds);
}
```

## 2

成员函数为类的成员函数
而友元函数并非类内成员函数

## 3

非成员函数可以访问类的 `public` 成员

## 4

```cpp
friend Stonewt operator*(double, const Stonewt& st);

Stonewt operator*(double d, const Stonewt& st)
{
    return Stonewt(d * st.pounds);
}

```

## 5

- `sizeof`
- `.`
- `.*`
- `::`
- `?:`


## 6

这些运算符必须使用成员函数来定义

## 7

```cpp
operator double() const {
    return norm;
}
```