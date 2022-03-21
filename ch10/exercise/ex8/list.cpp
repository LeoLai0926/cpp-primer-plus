/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 19:52:44
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-22 00:03:19
 * @FilePath     : list.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include "list.h"

List::List()          // create an empty List
{
    top = 0;
}

bool List::isempty() const
{
    return (top == 0);
}

bool List::isfull() const
{
    return (top == MAX);
}

bool List::add(const Item & item)
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

bool List::pop(Item & item)
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

void List::visit(void (*pf)(Item &))
{
    for (int i = 0; i < top; i++)
    {
        pf(items[i]);
    }

}