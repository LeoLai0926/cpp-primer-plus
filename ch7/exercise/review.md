<!--
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 13:43:08
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 16:25:06
 * @FilePath     : review.md
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
-->


# Reviews

## 1

1. 函数的声明
2. 函数的定义
3. 函数的调用

## 2

```cpp
// a
void igor(void);
// b
float tofu(int);
// c
double mpg(double, double);
// d
long summation(long [], int);
// e
double doctor(const char *);
double doctor(const char []);
// f
void ofcourse(boss);
// g
char * plot(map *);
```

## 3

```cpp
void set_array(int arr[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = value;
    }
}
```

## 4

```cpp
void set_array(int * begin, int * end, int value)
{
    for (int * pt = begin; pt != end; pt++)
    {
        *pt1 = value;
    }
}
```

## 5

```cpp
double arr_max(const double arr[], int n)
{
    double max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}
```

## 6
因为基本类型传递时是值传递, 修改的仅是副本而不会修改实参.

## 7
```cpp
"Hello World"
char str[] = "Hello World";
char * str = "Hello World";
```

## 8
```cpp
int replace(char * str, char c1, char c2)
{
    int times = 0;
    while (*str)
    {
        if (*str == c1)
        {
            *str = c2;
            times++;
        }
        str++;
    }
    return times;
}
```

## 9
```cpp
// *"pizza" -> p
// "taco"[2] -> c
```

## 10

按值传递可保护实参, 但效率较低
按地址传递效率高, 但无法保护实参

## 11
```cpp
int judge( int (*pf)(const char *) );
```

## 12

```cpp
void show(applicant app)
{
    cout << "App Info" << endl;
    cout << "Name: " << app.name << endl;
    cout << "Credit Ratings: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\t" << app.credit_ratings[i] << endl;
    }
}

void show(const applicant * papp)
{
    cout << "App Info" << endl;
    cout << "Name: " << papp->name << endl;
    cout << "Credit Ratings: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\t" << papp->credit_ratings[i] << endl;
    }
}
```

## 13
```cpp
typedef void (*p_f1) (applicant *);
typedef const char * (*p_f2) (const applicant *, const applicant *);

int main(int argc, char const *argv[])
{

    p_f1 p1 = f1;
    p_f2 p2 = f2;

    p_f1 ap[5];
    p_f2 (*pa)[10];

    return 0;
}
```