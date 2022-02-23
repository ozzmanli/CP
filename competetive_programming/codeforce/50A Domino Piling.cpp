#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m, n;
    int maxNumberOfDominoes = 0;
    cin >> m >> n;
    if (m < 1 || n < 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << floor((m * n) / 2);
    }
}
