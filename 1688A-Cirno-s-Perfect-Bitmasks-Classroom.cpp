// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1688/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll x;
    cin >> x;
    if (x % 2 == 1)
    {
        if (x > 1)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 3 << '\n';
        }
    }
    else
    {

        if (!(x & (x - 1)))
        {
            cout << x + 1 << endl;
        }
        else
        {
            cout << ((x & ~(x - 1)) * 1ll) << '\n';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
