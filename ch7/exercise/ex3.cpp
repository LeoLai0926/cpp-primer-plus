/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-12 20:02:16
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-12 20:06:44
 * @FilePath     : ex3.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};


void show(box);
void set_volume(box *);

int main(int argc, char const *argv[])
{

    box b = {"Unknown", 20, 30, 40, 0};
    set_volume(&b);
    show(b);
    return 0;
}

void show(box b)
{
    using namespace std;
    cout << "Box make from " << b.maker << endl;
    cout << "Volume " << b.volume << " with l x w x h: "
         << b.length << " x " << b.width << " x " << b.height << "." << endl;
}

void set_volume(box * pb)
{
    pb->volume = pb->height * pb->length * pb->width;
}