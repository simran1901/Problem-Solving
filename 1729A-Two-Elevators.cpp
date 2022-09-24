// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1729/problem/A

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i <= n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) \
    repn(i, m, n)         \
            cin >>        \
        arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll t1 = a - 1;
    ll t2 = abs(c - b) + abs(c - 1);
    if (t1 == t2)
    {
        cout << 3 << '\n';
    }
    else if (t1 < t2)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 2 << '\n';
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