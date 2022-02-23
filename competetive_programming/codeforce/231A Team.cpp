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
    string word;
    cin >> k;
    int a, b, c = 0;
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}