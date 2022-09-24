// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1715/problem/C

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
    vector<ll> a(n + 2, 0);
    for (ll i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 1; i <= n; ++i)
    {
        ans += (a[i] != a[i + 1]) * (n - (i + 1) + 1) * i;
    }
    while (m--)
    {
        ll i, x;
        cin >> i >> x;
        ans -= (a[i] != a[i - 1]) * (n - i + 1) * (i - 1);
        ans -= (a[i + 1] != a[i]) * (n - (i + 1) + 1) * i;
        a[i] = x;
        ans += (a[i] != a[i - 1]) * (n - i + 1) * (i - 1);
        ans += (a[i + 1] != a[i]) * (n - (i + 1) + 1) * i;
        cout << ans + n * (n + 1) / 2 << '\n';
    }
}

int main()
{
    IOS;

    solve();

    return 0;
}