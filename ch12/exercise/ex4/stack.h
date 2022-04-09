/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 00:42:56
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-07 22:33:24
 * @FilePath     : stack.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__STACK_H__)
#define __STACK_H__

typedef unsigned long Item;

class Stack
{
private:
    enum { MAX=10 };
    Item * pitems;
    int size;
    int top;
public:
    Stack(int n = MAX);
    Stack(const Stack & st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    Stack & operator=(const Stack & st);
};


#endif // __STACK_H__
