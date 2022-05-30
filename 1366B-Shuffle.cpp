// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1366/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    ll n, x, m;
    cin >> n >> x >> m;
    ll l = x, r = x;
    ll L, R;
    rep(i, m)
    {
        cin >> L >> R;
        if (max(l, L) <= min(r, R))
        {
            l = min(l, L);
            r = max(r, R);
        }
    }
    cout << r - l + 1 << '\n';
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