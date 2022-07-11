// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/570/B

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

    ll ans = m;

    if (m - 1 >= n - m)
    {
        if (m - 1 > 0)
            ans = m - 1;
    }
    else
    {
        if (m + 1 <= n)
            ans = m + 1;
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}