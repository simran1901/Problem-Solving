// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/450/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<int>>
#define v vector<int>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll n;
    cin >> n;
    vector<ll> arr({x, y, y - x, -1 * x, -1 * y, x - y});
    ll ans = arr[(n - 1) % 6] % 1000000007;
    if (ans < 0)
        ans = 1000000007 + ans;
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}