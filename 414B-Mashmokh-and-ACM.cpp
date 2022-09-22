// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/414/B

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

ll MOD = 1e9 + 7;

ll helper(ll curr, ll spaces, ll n, vv &dp)
{
    if (spaces == 0)
        return 1;

    if (dp[curr][spaces] != -1)
        return dp[curr][spaces];

    ll sum = 0;
    for (ll m = 1; m * curr <= n; m++)
    {
        sum += helper(curr * m, spaces - 1, n, dp);
        sum %= MOD;
    }
    return dp[curr][spaces] = sum % MOD;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vv dp(n + 1, v(k + 1, -1));
    cout << helper(1, k, n, dp) << endl;
}

int main()
{
    IOS;

    solve();

    return 0;
}