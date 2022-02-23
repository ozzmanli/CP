//============================================================================
// Name        : codeforce.cpp
// Author      : volkan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int dollarsToBorrow = 0;
    int actualCost      = 0;
    cin >> a >> b >> c;

    // cost of the first banana, initial number of dollars the soldier has and
    // number of bananas he wants.

    for (int i = 1; i <= c; i++)
    {
        actualCost += i * a;
    }

    if (actualCost > b)
    {
        dollarsToBorrow = actualCost - b;
    }

    cout << dollarsToBorrow;
    return 0;
}