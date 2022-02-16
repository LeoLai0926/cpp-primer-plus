<!--
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-02-15 21:18:55
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-02-15 22:36:29
 * @FilePath     : review.md
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
-->

# Reviews

## 1
```cpp
// a
char actor [30];
// b
short betsie [100];
// c
float chuck [13];
// d
long double dipsea [64];
```

## 2
```cpp
#include <array>

// a
std::array<char, 30> actor;
// b
std::array<short, 100> betsie;
// c
std::array<float, 13> chuck;
// d
std::array<long double, 64> dipsea;
```

## 3
```cpp
int nums[] = {1, 3, 5, 7, 9};
```

## 4
```cpp
int even = nums[0] + nums[4];
```

## 5
```cpp
#include <iostream>
std::cout << ideas[1];
```

## 6
```cpp
char str [] = "cheeseburger";
```

## 7
```cpp
#include <string>
std::string str = "Waldorf Salad";
```

## 8
```cpp
struct fish
{
   char kind [30];
   int weight;
   float length;
};
```

## 9
```cpp
struct fish
{
    char kind [30];
    int weight;
    float length;
};

fish ff = {"BigFish", 12, 4.2};
```

## 10
```cpp
enum Response
{
    No,
    Yes,
    Maybe
};
```

## 11
```cpp
#include <iostream>

double ted = 1.0;
double * pt = &ted;
std::cout << *pt;
```

## 12
```cpp
double treacle [10];
double * pt = treacle;
std::cout << *pt << std::endl;
std::cout << *(pt + 9) << std::endl;
```

## 13
```cpp
#include <iostream>

int main(void)
{
    int size;
    std::cout << "Enter an integer: ";
    std::cin >> size;
    int * pt = new int [size];
    delete [] pt;

    std::vector<int> arr(size);
}
```

## 14
```cpp
cout << (int *) "Home of the jolly bytes";
```

## 15
```cpp
#include <iostream>

struct fish
{
   char kind [30];
   int weight;
   float length;
};

int main(void)
{
    fish * f = new fish {"BigFish", 12, 4.2};
    std::cout << f->kind << std::endl;
    std::cout << f->weight << std::endl;
    std::cout << f->length << std::endl;
}
```

## 16
```cpp

```

## 17
```cpp
#include <iostream>
#include <string>
#include <vector>
#include <array>

const int size = 10;
std::vector<std::string> arr(size);
std::array<std::string, size> arr;
```