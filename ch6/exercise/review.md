<!--
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-27 22:37:26
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-27 23:23:40
 * @FilePath     : review.md
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
-->

# Reviews

## 1

第一种的两个条件判断均会运行, 效率低于第二种

## 2

ch + 1: ch 为 char型, 为了进行相加将会强制转换成为 1 的 int型. 最终结果将为 int型的值. 而非char型.

## 3

```
H$i$!$
$S$e$n$d$ $ct1 = 9, ct2 = 9
```

## 4

```cpp
(weights >= 115) && (weights < 125)
(ch == 'q') || (ch == 'Q')
(x % 2 == 0) && (x != 26)
(x % 2 == 0) && (x % 26 != 0)
(donation >= 1000) && (donation <= 2000) || (1 == guest)
(ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')
```

## 5

!!x == x 的条件为 x 为 bool 类型

## 6

(x >= 0) ? x : -x

## 7

```cpp
switch (ch)
{
    case 'A':
        a_grade++; break;
    case 'B':
        b_grade++; break;
    case 'C':
        c_grade++; break;
    case 'D':
        d_grade++; break;
    default:
        f_grade++;
}
```

## 8

使用int 类型可能会导致输入字符时cin无法正常读入的问题.

## 9

```cpp
int line = 0;
char ch;
while (cin.get(ch) && ch != 'Q')
{
    if (ch == '\n')
        line++;
}
```