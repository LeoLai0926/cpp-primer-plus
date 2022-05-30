/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-05-30 22:57:09
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-05-30 22:57:29
 * @FilePath     : stcktp1.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */
/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-18 22:14:56
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-19 19:42:30
 * @FilePath     : stcktp1.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__STCKTP_H__)
#define __STCKTP_H__

template <class Type>
class Stack
{
private:
    enum { SIZE = 10 };
    int stacksize;
    Type * items;
    int top;
public:
    explicit Stack(int ss = SIZE);
    Stack(const Stack & st);
    ~Stack(){ delete [] items; }
    bool isempty() { return top == 0; }
    bool isfull() { return top == stacksize; }
    bool push(const Type & item);
    bool pop(Type & item);
    Stack & operator=(const Stack & st);
};

template <class Type>
Stack<Type>::Stack(int ss) : stacksize(ss), top(0)
{
    items = new Type [stacksize];
}

template <class Type>
Stack<Type>::Stack(const Stack & st)
{
    items = new Type [stacksize];
    for (int i = 0; i < top; i++)
    {
        items[i] = st.items[i];
    }
}

template <class Type>
bool Stack<Type>::push(const Type & item)
{
    if (top < stacksize)
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
bool Stack<Type>::pop(Type & item)
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

template <class Type>
Stack<Type> & Stack<Type>::operator=(const Stack<Type> &st)
{
    if (this == &st)
    {
        return *this;
    }

    delete [] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new Type [stacksize];
    for (int i = 0; i < top; i++)
    {
        items[i] = st.items[i];
    }

    return *this;
}

#endif // __STCKTP_H__
