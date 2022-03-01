/*
 * @Author       : Lai Li
 * @E-mail       : laili_sclead@126.com
 * @Department   : Image Algorithm Department
 * @Date         : 2022-03-01 23:33:33
 * @LastEditors  : Lai Li
 * @LastEditTime : 2022-03-01 23:45:16
 * @FilePath     : ex7.cpp
 * @Description  :
 * Copyright (c) 2022 Chengdu Lead Science&Technology Co.,Ltd.,
 * All Rights Reserved.
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    std::string words;
    int vowels = 0, consonants = 0, others = 0;
    cout << "Enter words(q to quit): ";
    while ((cin >> words) && (words != "q"))
    {
        if (isalpha(words[0]))
        {
            switch (words[0])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowels++;
                break;
            default:
                consonants++;
                break;
            }
        }
        else
        {
            others++;
        }
    }

    cout << vowels << " words begining with vowels." << endl;
    cout << consonants << " words begining with consonants." << endl;
    cout << others << " others." << endl;

    return 0;
}
