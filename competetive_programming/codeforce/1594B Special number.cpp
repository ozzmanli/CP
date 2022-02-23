#include <bits/stdc++.h>
// problem tags
// bit mask, math
using namespace std;
#define MOD 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long ans = 0, pow = 1;
        for (int i = 0; i < 31; i++)
        {
            if (k & (1 << i))
            {
                ans += pow;
                ans %= MOD;
            }
            pow *= n;
            pow %= MOD;
        }
        cout << ans << "\n";
    }
}
