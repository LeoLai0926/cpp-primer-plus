/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-01-18 23:24:17
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-01-18 23:27:01
 * @FilePath     : 3.cpp
 * @Description  : 
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

/**
 * @brief 3. 编写一个C++程序，它使用 3 个用户定义的函数（包括main()），并生成下面的输出：
 * ```
 *  Three blind mice
 *  Three bline mice
 *  See how they run
 *  See how they run
 * ```
 * 
 */

#include <iostream>
void mice();
void run();

int main(int argc, char const *argv[])
{
    mice();
    mice();
    run();
    run();
    return 0;
}

void mice()
{
    std::cout << "Three blind mice" << std::endl;
}

void run()
{
    std::cout << "See how they run" << std::endl;
}
