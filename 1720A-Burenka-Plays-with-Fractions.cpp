// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1720/problem/A

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
#define inpArr(arr, n) \
    rep(i, n)          \
            cin >>     \
        arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll ans = 0;
    if ((b * c) == (a * d))
    {
        ans = 0;
    }
    else if (a == 0 || c == 0 || (b * c) % (a * d) == 0 || (a * d) % (b * c) == 0)
    {
        ans = 1;
    }
    else
        ans = 2;
    cout << ans << '\n';
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