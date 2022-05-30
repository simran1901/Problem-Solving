// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/600/B

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
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(a, a + n);
    rep(i, m)
    {
        auto upper = upper_bound(a, a + n, b[i]);
        cout << upper - a << ' ';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}