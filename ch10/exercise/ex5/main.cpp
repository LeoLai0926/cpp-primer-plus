/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-21 19:55:06
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-21 23:25:08
 * @FilePath     : main.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <cctype>           // or ctype.h
#include "stack.h"

int main(int argc, char const *argv[])
{
    using namespace std;
    Stack st;               // create an empty stack
    char ch;
    customer cust;
    double total = 0.0;

    cout << "Please enter: " << endl
         << "A) to add\t"
         << "P) to pop\t"
         << "Q) to quit" << endl;
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
        {
            continue;
        }
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }

        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "Enter customer's fullname: ";
            getline(cin, cust.fullname);
            cout << "Enter customer's payment: ";
            cin >> cust.payment;
            cin.get();
            if (st.isfull())
            {
                cout << "Stack already full" << endl;
            }
            else
            {
                st.push(cust);
            }
            break;
        case 'P':
        case 'p':
            if (st.isempty())
            {
                cout << "Stack already empty" << endl;
            }
            else
            {
                st.pop(cust);
                total += cust.payment;
                cout << "customer " << cust.fullname << " popped" << endl;
                cout << "Total payment: " << total << endl;
            }
            break;
        default:
            break;
        }
        cout << "Please enter: " << endl
             << "A) to add\t"
             << "P) to pop\t"
             << "Q) to quit" << endl;
    }

    cout << "Bye" << endl;
    return 0;
}
