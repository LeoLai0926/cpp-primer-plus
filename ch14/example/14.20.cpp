/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-05-28 11:06:54
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-05-30 21:20:37
 * @FilePath     : 14.20.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */


#include <iostream>

using namespace std;

template <typename T>
class Beta
{
private:
    template <typename V>       // nested template class member
    class hold
    {
    private:
        V val;
    public:
        hold(V v=0) : val(v) {}
        void show() const { cout << val << endl; }
        V Value() const { return val; }
    };

    hold<T> q;                  // template object
    hold<int> n;                // template object
public:
    Beta(T t, int i) : q(t), n(i) {}
    template<typename U>        // template method
    U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; }
    void show() const { q.show(); n.show(); }
};


int main(int argc, char const *argv[])
{
    Beta<double> guy(3.5, 3);
    cout << "T was set to double" << endl;
    guy.show();
    cout << "V was set to T, which is double, then V was set to int" << endl;
    cout << guy.blab(10, 2.3) << endl;
    cout << "U was set to int" << endl;
    cout << guy.blab(10.0, 2.3) << endl;
    cout << "U was set to double" << endl;
    cout << "Done" << endl;
    return 0;
}
