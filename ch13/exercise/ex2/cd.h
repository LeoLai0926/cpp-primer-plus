/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-16 09:23:12
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-16 10:18:56
 * @FilePath     : cd.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__CD_H__)
#define __CD_H__

// base class

class CD
{
private:
    char * performers;
    char * label;
    int selections;             // number of selections
    double playtime;            // playing time in minutes
public:
    CD(const char * s1, const char * s2, int n, double x);
    CD(const CD & d);
    CD();
    virtual ~CD();
    virtual void Report() const;        // report all CD data
    CD & operator=(const CD & d);
};


class Classic : public CD
{
private:
    char * worker;
public:
    Classic();
    Classic(const char * s1, const char * s2, const char * s3, int n, double x);
    virtual void Report() const;
    virtual ~Classic();
    Classic & operator=(const Classic & d);
};


#endif // __CD_H__
