/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 19:45:45
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-22 00:04:04
 * @FilePath     : list.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__LIST_H__)
#define __LIST_H__

typedef unsigned long Item;

class List
{
private:
    enum {MAX = 10};            // constant specific to class
    Item items[MAX];            // holds stack items
    int top;                    // index for top stack item
public:
    List();
    bool isempty() const;
    bool isfull() const;
    // add() returns false if stack already is full, true otherwise
    bool add(const Item & item);   // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item);          // pop top into item
    void visit(void (*pf) (Item &));
};

#endif // __LIST_H__
