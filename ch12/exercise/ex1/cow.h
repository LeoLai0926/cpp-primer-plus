/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-06 19:44:19
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-06 20:40:04
 * @FilePath     : cow.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#if !defined(__COW_H__)
#define __COW_H__

class Cow
{
private:
    char name[20];
    char *hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow & c);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const;
};


#endif // __COW_H__
