//============================================================================
// Name        : codeforce.cpp
// Author      : volkan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
   #include <unordered_set>
using namespace std;

int main()
{




    string word;
    cin >> word;
    unsigned int count = 0;
    unordered_set<int> stringSet;
    for (unsigned int i = 0; i < word.length(); i++)
    {
        if (stringSet.find(word[i]) == stringSet.end())
            count++;

        stringSet.insert(word[i]);
    }
    if (count %   2 == 0   )
    {
        cout <<                      "CHAT WITH HER!";
    }
    else
    {      cout <<    "   IGNORE HIM!";
    }
    return 0;
}
