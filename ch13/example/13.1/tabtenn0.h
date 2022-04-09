/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-09 15:52:21
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-09 15:55:38
 * @FilePath     : tabtenn0.h
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#if !defined(__TABTENN0_H__)
#define __TABTENN0_H__

#include <string>

using std::string;

// simple base class

class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string &fn="none", const string &ln="none", bool ht=false);
    void Name() const;
    bool HasTable() const { return hasTable; }
    void ResetTable(bool v) { hasTable = v; }
};


#endif // __TABTENN0_H__
