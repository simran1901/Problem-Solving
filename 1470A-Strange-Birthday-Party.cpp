// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1470/A

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
    unordered_map<ll, ll> mapK;
    bool arr[m];
    ll ptr = 0, ans = 0;
    ll temp;
    rep(i, n)
    {
        cin >> temp;
        mapK[temp]++;
    }
    ll costs[m];
    rep(i, m) cin >> costs[i];

    for (ll i = m - 1; i >= 0; i--)
    {
        for (ll j = 0; j < mapK[i + 1]; j++)
        {
            if (costs[ptr] < costs[i] && ptr < m)
            {
                ans += costs[ptr];
                ptr++;
            }
            else
            {
                ans += costs[i];
            }
        }
    }
    cout << ans << '\n';
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