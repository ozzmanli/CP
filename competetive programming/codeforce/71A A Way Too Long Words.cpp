/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP,
Ruby, C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS Code,
Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <limits>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int k = 0;

    cin >> k;
    string word;
    string newShortWord;
    vector<string> strings;
    int count = 0;
    string countString;

    for (int i = 0; i <= k; i++)
    {
        getline(cin, word);

        if (word.length() > 10)
        {
            count       = word.length() - 2;
            countString = to_string(count);

            newShortWord.append(word, 0, 1);
            newShortWord.append(countString, 0, countString.length());
            newShortWord.append(word, word.length() - 1, 1);
            strings.push_back(newShortWord);
            newShortWord = "";
        }
        else
        {
            strings.push_back(word);
        }
    }

    for (int i = 0; i <= k; i++)
    {
        cout << strings[i] << "\n";
    }
    return 0;
}