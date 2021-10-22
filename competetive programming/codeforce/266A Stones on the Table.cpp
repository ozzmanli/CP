//============================================================================
// Name        : codeforce.cpp
// Author      : volkan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string word;
    int a = 0, b = 0;
    cin >> a >> word;
    for (int i = 0; i < a; i++)
    {
        if (word[i] == word[i + 1])
        {
            b++;
        }
    }
    cout << b;
    return 0;
}