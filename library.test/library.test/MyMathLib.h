#pragma once
#include <cstdlib>

using namespace std;

namespace MyMathLib
{
    int Sum(int Number1, int Number2)
    {
        return Number1 + Number2;
    }

    int RandomNumber(int From, int To)
    {
        return rand() % (To - From + 1) + From;
    }
}