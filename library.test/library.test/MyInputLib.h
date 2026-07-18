#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace MyInputLib
{
    int ReadPositiveNumber(string Message)
    {
        int Number;

        do
        {
            cout << Message;
            cin >> Number;

        } while (Number <= 0);

        return Number;
    }
}