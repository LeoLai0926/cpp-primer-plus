/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 00:44:14
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-09 10:58:05
 * @FilePath     : stack.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "stack.h"


Stack::Stack(int n)
{
    pitems = new Item [n];
    size = n;
    top = 0;
}

Stack::Stack(const Stack &st)
{
    pitems = new Item[st.size];
    for (int i = 0; i < st.size; i++)
    {
        pitems[i] = st.pitems[i];
    }
    size = st.size;
    top = st.top;
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if (top < MAX)
    {
        pitems[top++] = item;
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::pop(Item &item)
{
    if (top > 0)
    {
        item = pitems[--top];
        return true;
    }
    else
    {
        return false;
    }
}

Stack & Stack::operator=(const Stack &st)
{
    if (this == &st)
    {
        return *this;
    }

    delete [] pitems;
    pitems = new Item[st.size];
    for (int i = 0; i < st.size; i++)
    {
        pitems[i] = st.pitems[i];
    }
    size = st.size;
    top = st.top;
    return *this;
}

