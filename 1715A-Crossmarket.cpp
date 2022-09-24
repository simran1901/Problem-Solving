// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1715/problem/A

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define v vector<ll>
#define vv vector<v>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n == 1 && m == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        ll mm = min(n, m);
        ll nn = max(n, m);
        cout << nn + 2 * mm - 2 << '\n';
    }
}

int main()
{
    IOS;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}