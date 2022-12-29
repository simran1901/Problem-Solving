// Codeforces
// Author: simranmakhijani55
//

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define nl '\n'
#define pl pair<ll, ll>

using namespace std;

const ll sz = 2 * 1e5 + 50;

ll n;
vl arr(sz);
vector<bool> dp(sz);
vl temp[sz];
void solve()
{
    cin >> n;
    inpArr(arr, 1, n + 1);

    rep(i, n + 11)
    {
        temp[i].clear();
        dp[i] = false;
    }
    repn(i, 1, n + 1)
    {
        ll l = i;
        ll r = arr[i] + i;
        if (r <= n)
            temp[l].push_back(r);
        l = i - arr[i];
        r = i;
        if (l >= 1)
            temp[l].push_back(r);
    }
    dp[1] = true;
    repn(i, 1, n + 1)
    {
        if (!dp[i])
            continue;
        for (auto el : temp[i])
            dp[el + 1] = true;
    }
    if (dp[n + 1])
        cy;
    else
        cn;
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