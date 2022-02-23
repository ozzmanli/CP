#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    int n;
    int x = 0;
    string word;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, word);
        if (word[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }
    cout << x;
}
