/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 19:45:45
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-17 16:57:01
 * @FilePath     : stack.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__STACK_H__)
#define __STACK_H__

template <class Type>
class Stack
{
private:
    enum {MAX = 10};            // constant specific to class
    Type items[MAX];            // holds stack items
    int top;                    // index for top stack item
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Type & item);   // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Type & item);          // pop top into item
};

template <class Type>
Stack<Type>::Stack() // create an empty stack
{
    top = 0;
}

template <class Type>
bool Stack<Type>::isempty() const
{
    return (top == 0);
}

template <class Type>
bool Stack<Type>::isfull() const
{
    return (top == MAX);
}

template <class Type>
bool Stack<Type>::push(const Type &item)
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

template <class Type>
bool Stack<Type>::pop(Type &item)
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

#endif // __STACK_H__
