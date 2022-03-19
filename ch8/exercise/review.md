<!--
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-19 10:37:47
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-19 11:32:04
 * @FilePath     : review.md
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
-->


# Rerview

## 1

当执行函数体代码的时间小于执行函数调用机制的时间时, 应当使用 `inline` 关键字声明为内联函数.

## 2

```cpp
// prototype
void song(const char * name, int times);

// a
void song(const char * name, int times=1);

// b
// none

// c
void song(const char * name="O. My Papa", int times=1);
void song(int times, const char * name="O. My Papa");
```

## 3
```cpp
void iquote();

void iquote(int i)
{
    std::cout << "\"" << i << "\"";
}

void iquote(double d)
{
    std::cout << "\"" << d << "\"";
}

void iquote(std::string s)
{
    std::cout << "\"" << s << "\"";
}
```

## 4
```cpp
#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};


void show(const box &b);
void setVolume(box &b);

int main(int argc, char const *argv[])
{
    box b = {"Hand-made", 30, 40, 5};
    show(b);
    setVolume(b);
    show(b);
    return 0;
}

void show(const box &b)
{
    using namespace std;
    cout << b.maker << endl;
    cout << "Height: " << b.height << endl;
    cout << "Width: " << b.width << endl;
    cout << "Length: " << b.length << endl;
    cout << "Volume: " << b.volume << endl;
}

void setVolume(box &b)
{
    b.volume = b.height * b.width * b.length;
}
```

## 5
```cpp
// line25 - void fill(std::array<double, SEASONS> *pa);
void fill(std::array<double, SEASONS> &a);
// line37 - void fill(std::array<double, SEASONS> *pa)
void fill(std::array<double, SEASONS> &a)
// line43 - cin >> (*pa)[i];
cin >> a[i];


// line27 - void show(std::array<double, SEASONS> da);
void show(const std::array<double, SEASONS> &a);
// line47 - void show(std::array<double, SEASONS> da)
void show(const std::array<double, SEASONS> &a)
```

## 6
```cpp
// a. default value
double mass(double density, double volume = 1.0)
{
    return density * volume;
}

// b. function override
void repeat(int times, char * string)
{
    for (int i = 0; i < times; i++)
    {
        std::cout << string << std::endl;
    }
}

void repeat(char * string)
{
    int times = 5;
    for (int i = 0; i < times; i++)
    {
        std::cout << string << std::endl;
    }
}

// c. function template
template <typename T>
T average(T a, T b)
{
    return (a + b) / 2;
}

// d. none
```

## 7
```cpp
template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}
```

## 8
```cpp
template <typename T>
const T &vMax(const T &b1, const T &b2);

template <>
const box &vMax(const box &b1, const box &b2)
{
    return b1.volume > b2.volume ? b1 : b2;
}
```

## 9
v1: float
v2: float &
v3: float &
v4: int
v5: double