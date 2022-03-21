/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 19:52:44
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 19:53:59
 * @FilePath     : stack.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "stack.h"

Stack::Stack()          // create an empty stack
{
    top = 0;
}

bool Stack::isempty() const
{
    return (top == 0);
}

bool Stack::isfull() const
{
    return (top == MAX);
}

bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
    {
        return false;
    }
}