/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 19:45:45
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 23:21:20
 * @FilePath     : stack.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__STACK_H__)
#define __STACK_H__
#include "customer.h"

typedef customer Item;

class Stack
{
private:
    enum {MAX = 10};            // constant specific to class
    Item items[MAX];            // holds stack items
    int top;                    // index for top stack item
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item);   // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item);          // pop top into item
};

#endif // __STACK_H__
