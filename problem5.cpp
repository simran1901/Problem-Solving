// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1700/problem/0

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    ans += m * (m + 1) / 2;
    ans += m * (n * (n + 1) / 2 - 1);
    cout << ans << endl;
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
