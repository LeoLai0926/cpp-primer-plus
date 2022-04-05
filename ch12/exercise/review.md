<!--
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-05 11:25:59
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-06 00:50:30
 * @FilePath     : review.md
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
-->


# Review

## 1

a: 构造函数未将指针 `str` 初始化. 应当设置成为 `nullptr` 或使用 `new` 来初始化.
b: 构造函数未创建新的字符串, 只是复制了原字符串的地址. 应当使用 `new []` 和 `strcpy()`.
c: 构造函数复制了字符串, 但并没有为字符串分配空间, 应当使用 `new char [len+1]` 来分配地址.


```cpp

#include <cstring>

using namespace std;

class String
{
private:
    char * str;
    int len;
// ...
public:
    String();
    String(const char * s);
};

String::String()
{
    str = nullptr;
    len = 0;
}

String::String(const char * s)
{
    str = new char [strlen(s) + 1];
    strcpy(str, s);
    len = 0;
}
```

## 2

1. 需要在类的定义中定义一个析构函数
2. 需要自己定义一个复制构造函数
3. 需要重载赋值运算符

## 3

1. 默认构造函数
2. 默认析构函数
3. 复制构造函数
4. 赋值运算符
5. 地址运算符

## 4

```cpp

#include <iostream>
#include <cstring>

using namespace std;

class nifty
{
private:
    char * personality;
    int talents;
public:
    nifty();
    nifty(const char * s);
    ~nifty();
    friend ostream & operator<<(ostream & os, const nifty & n);
};

nifty::nifty()
{
    personality = nullptr;
    talents = 0;
}

nifty::nifty(const char *s)
{
    personality = new char [strlen(s) + 1];
    strcpy(s, personality);
    talents = 0;
}

nifty::~nifty()
{
    delete [] personality;
}

ostream &operator<<(ostream &os, const nifty &n)
{
    os << n.personality << endl;
    os << n.talents << endl;
    return os;
}
```

## 5

```cpp
// 构造函数
Golfer();                                   // a
Golfer(const char * name, int g = 0);       // b
Golfer(const Golfer g);                     // c
```

1. a
2. b
3. b
4. a
5. c
6. b
7. c
8. b & 赋值运算符

还需要一个赋值运算符的重载.

```cpp
// golfer.h

#include <iostream>
#include <cstring>

using namespace std;

class Golfer
{
private:
    char * fullname;
    int games;
    int * scores;
public:
    Golfer();
    Golfer(const char * name, int g = 0);
    Golfer(const Golfer & g);
    ~Golfer();
    Golfer operator=(const Golfer & g);
};

Golfer::Golfer()
{
    cout << "Using default constructor." << endl;
    fullname = nullptr;
    games = 0;
    scores = new int(0);
}

Golfer::Golfer(const char *name, int g)
{
    cout << "Using string and int constructor." << endl;
    fullname = new char[strlen(name) + 1];
    strcpy(fullname, name);
    games = g;
    scores = new int(0);
}

Golfer::Golfer(const Golfer &g)
{
    cout << "Using copy constructor." << endl;
    if (g.fullname == nullptr)
    {
        fullname = nullptr;
    }
    else
    {
        fullname = new char[strlen(g.fullname) + 1];
        strcpy(fullname, g.fullname);
    }
    games = g.games;
    scores = new int(*(g.scores));
}

Golfer::~Golfer()
{
    delete [] fullname;
    delete scores;
}

Golfer Golfer::operator=(const Golfer &g)
{
    // cout << "Using copy operator." << endl;
    return Golfer(g);
}
```

```cpp
// main.cpp
#include "golfer.h"

int main(int argc, char const *argv[])
{
    cout << "#1" << endl;
    Golfer nancy;
    cout << endl;

    cout << "#2" << endl;
    Golfer lulu("Little lulu");
    cout << endl;

    cout << "#3" << endl;
    Golfer roy("Roy Hobbs", 12);
    cout << endl;

    cout << "#4" << endl;
    Golfer * par = new Golfer;
    cout << endl;

    cout << "#5" << endl;
    Golfer next = lulu;
    cout << endl;

    cout << "#6" << endl;
    Golfer hazzard = "Weed Thwacker";
    cout << endl;

    cout << "#7" << endl;
    *par = nancy;
    cout << endl;

    cout << "#8" << endl;
    nancy = "Nancy Putter";
    cout << endl;

    return 0;
}
```

```bash
# running result
#1
Using default constructor.

#2
Using string and int constructor.

#3
Using string and int constructor.

#4
Using default constructor.

#5
Using copy constructor.

#6
Using string and int constructor.

#7
Using copy constructor.

#8
Using string and int constructor.
Using copy constructor.
```