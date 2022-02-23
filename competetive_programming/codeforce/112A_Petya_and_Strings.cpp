/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java,
PHP, Ruby, Perl, C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly,
HTML, CSS, JS, SQLite, Prolog. Code, Compile, Run and Debug online from anywhere
in world.
*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    int value              = 0;
    int numberOfTransforms = 0;
    string stringOne, stringTwo;
    getline(cin, stringOne);
    getline(cin, stringTwo);
    for (int i = 0; i < stringOne.length(); i++)
    {




















        if (tolower(stringOne[i]) > tolower(stringTwo[i]))
        {
            cout << 1;

            return 0;
        }

        else if (tolower(stringOne[i]) < tolower(stringTwo[i]))
        {

            cout << (-1);

            return 0;
        }
    }

    cout << 0;
    return 0;
}
