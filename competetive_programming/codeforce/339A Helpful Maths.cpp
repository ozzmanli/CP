/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java,
PHP, Ruby, Perl, C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly,
HTML, CSS, JS, SQLite, Prolog. Code, Compile, Run and Debug online from anywhere
in world.

*******************************************************************************/
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int main()
{
    string mathEquation;
    getline(cin, mathEquation);
    int array[100];
    int count = 0;
    for (int i = 0; i < mathEquation.length(); i++)
    {
        if (mathEquation[i] != '+')
        {
            array[count++] = mathEquation[i] - '0';
        }
    }

    sort(array, array + count);

    for (int i = 0; i < count; i++)
    {
        if (i == count - 1)
        {
            cout << array[i];
        }
        else
        {

            cout << array[i] << '+';
        }
    }

    return 0;
}