#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {

        ll ans = 0;
        ll a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "0"
                 << "\n";
        }
        else
        {
            if (a < b)
                swap(a, b);

            ans = 0;
            while (a > b)
            {
                if (a / 8 >= b && a % 8 == 0)
                {
                    ans += 1;
                    a = a / 8;
                }
                else if (a / 4 >= b && a % 4 == 0)
                {
                    ans += 1;
                    a = a / 4;
                }
                else if (a / 2 >= b && a % 2 == 0)
                {
                    ans += 1;
                    a = a / 2;
                }
                else
                {
                    break;
                }
            }

            a == b ? cout << ans << "\n"
                   : cout << "-1"
                          << "\n";
        }
    }

    return 0;
}
