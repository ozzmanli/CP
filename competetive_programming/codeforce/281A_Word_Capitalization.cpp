// Your First C++ Program

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    getline(cin, word);

    if (!isupper(word[0]))
    {
        word[0] = toupper(word[0]);
    }

    cout << word;
    return 0;
}