#include <iostream>
using namespace std;

int main()
{
    int n, k, i, a[50], count = 0;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > 0 &&
            a[i] >= a[k - 1]) // k -1 because if k = 5 then 0,1,2,3,4 k = 4
        {
            count++;
        }
    }
    cout << count << endl;
}
