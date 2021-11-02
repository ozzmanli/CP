#include <iostream>
using namespace std;

int s, n;
int x[10000], y[10000];

int main()
{
    cin >> s >> n;

    int temp1 = 0;
    int temp2 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    // bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (x[j] > x[j + 1])
            {
                temp1    = x[j];
                x[j]     = x[j + 1];
                x[j + 1] = temp1;

                temp2    = y[j];
                y[j]     = y[j + 1];
                y[j + 1] = temp2;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i] >= s)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            s += y[i];
        }
    }

    cout << "YES";
    return 0;
}