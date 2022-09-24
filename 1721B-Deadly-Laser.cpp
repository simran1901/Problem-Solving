// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1721/problem/B

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
    ll n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    ll ans = 0;
    if ((sx-d<=1 && sx+d>=n) || (sy-d<=1 && sy+d>=m) || (sx+d>=n && sy+d>=m) || (sx-d<=1 && sy-d<=1))
    {
        ans = -1;
    }
    else
    {
        ans = n - 1 + m - 1;
    }
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