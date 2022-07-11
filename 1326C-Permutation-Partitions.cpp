// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1326/C

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
    ll n, k;
    ll MOD = 998244353;
    cin >> n >> k;
    ll p = -1;
    ll ans = 1;
    ll sum = 0, a;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        if (a >= n - k + 1)
        {
            if (p != -1)
                ans = 1LL * ans * (i - p) % MOD;
            sum += a;
            p = i;
        }
    }
    cout << sum << " " << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}