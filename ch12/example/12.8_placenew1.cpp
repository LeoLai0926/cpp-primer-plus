/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-04-04 01:33:23
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-04-04 01:51:42
 * @FilePath     : 12.8_placenew1.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>
#include <new>

using namespace std;

const int BUF = 512;

class JustTesting
{
private:
    string words;
    int number;
public:
    JustTesting(const string & s = "Just Testing", int n = 0)
    {
        words = s;
        number = n;
        cout << words << " constructed." << endl;
    }
    ~JustTesting()
    {
        cout << words << " destroyed." << endl;
    }
    void Show() const
    {
        cout << words << ", " << number << endl;
    }
};

int main(int argc, char const *argv[])
{
    char * buffer = new char[BUF];

    JustTesting *pc1, *pc2;

    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("Heap1", 20);
    cout << endl;

    cout << "Memory block address: " << endl;
    cout << "buffer: " << (void *) buffer << endl;
    cout << "pc1: " << (void *) pc1 << endl;
    cout << "pc2: " << pc2 << endl;

    cout << "Memory contents: " << endl;
    cout << "pc1: ";
    pc1->Show();
    cout << "pc2: ";
    pc2->Show();
    cout << endl;

    JustTesting *pc3, *pc4;
    pc3 = new (buffer) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("Heap2", 10);

    cout << "Memory block address: " << endl;
    cout << "pc3: " << (void *)pc3 << endl;
    cout << "pc4: " << pc4 << endl;

    cout << "Memory contents: " << endl;
    cout << "pc3: ";
    pc3->Show();
    cout << "pc4: ";
    pc4->Show();
    cout << endl;

    delete pc2;
    delete pc4;
    delete [] buffer;
    cout << "Done." << endl;

    return 0;
}
