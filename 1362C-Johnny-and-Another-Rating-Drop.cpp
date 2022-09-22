// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1362/C

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

ll arr[61];
ll powers[61];
ll p = 0, pn = 1, n;

void solve()
{
    ll n;
    cin >> n;

    ll ans = 0;
    rep(i, 60)
    {
        if (n & (1ll << i))
            ans += (1ll << (i + 1)) - 1;
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