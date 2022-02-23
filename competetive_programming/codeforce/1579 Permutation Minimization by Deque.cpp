#include <bits/stdc++.h>
using namespace std;
using ll     = long long;
using vb     = vector<bool>;
using vvb    = vector<vb>;
using vi     = vector<int>;
using vvi    = vector<vi>;
using vl     = vector<ll>;
using vvl    = vector<vl>;
using vc     = vector<char>;
using vvc    = vector<vc>;
using vs     = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void setIO()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    setIO();
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        deque<int> ret;
        int mn = 1e9;

        for (int i = 0; i < n; i++)
        {
            int pi;
            cin >> pi;

            mn = min(mn, pi);

            if (mn == pi)
                ret.push_front(pi);
            else
                ret.push_back(pi);
        }

        for (auto it : ret)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}