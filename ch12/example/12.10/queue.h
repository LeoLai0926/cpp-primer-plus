/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-04 10:45:49
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-04 16:04:43
 * @FilePath     : queue.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__QUEUE_H__)
#define __QUEUE_H__

#include <iostream>
#include "customer.h"

typedef Customer Item;

struct Node
{
    Item item;
    Node * next;
};


class Queue
{
private:
    enum { Q_SIZE=10 };
    int items;
    const int qsize;
    Node * front = nullptr;
    Node * rear = nullptr;
    Queue(const Queue & q) : qsize(0) { };
    Queue & operator=(const Queue & q) { return *this; }
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item & item);
    bool dequeue(Item & item);
};


#endif // __QUEUE_H__
