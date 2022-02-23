/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java,
PHP, Ruby, Perl, C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly,
HTML, CSS, JS, SQLite, Prolog. Code, Compile, Run and Debug online from anywhere
in world.
*******************************************************************************/
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int value              = 0;
    int numberOfTransforms = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> value;
            if (value == 1)
            {
                numberOfTransforms = abs(2 - i) + abs(j - 2);
                cout << numberOfTransforms;
                return 0;
            }
        }
    }

    return 0;
}