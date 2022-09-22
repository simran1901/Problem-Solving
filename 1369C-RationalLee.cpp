// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1369/C

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
    ll n, k;
    cin >> n >> k;
    v a(n);
    v w(k);
    rep(i, n) cin >> a[i];
    rep(i, k) cin >> w[i];
    sort(a.begin(), a.end(), greater<ll>());
    sort(w.begin(), w.end());
    ll ans = 0;
    ll ptr = k - 1;
    rep(i, k)
    {
        ans += a[i];
        if (w[i] - 1 == 0)
        {
            ans += a[i];
        }
        else
        {
            ptr += w[i] - 1;
            ans += a[ptr];
        }
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