// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1720/problem/D1

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i <= n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, n) \
    rep(i, n)          \
            cin >>     \
        arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vl arr(n);
    rep(i, n - 1)
    {
        cin >> arr[i];
    }

    vector<ll> dp(1);

    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        ll cur = 0;
        dp.push_back(1);
        for (int j = i - 1; j >= max(0ll, i - 512 * 1ll); j--)
        {
            if ((arr[i] ^ j) > (arr[j] ^ i))
            {
                dp.back() = max(dp.back(), dp[j + 1] + 1);
            }
        }

        mx = max(mx, dp.back());
    }

    cout << mx << '\n';
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