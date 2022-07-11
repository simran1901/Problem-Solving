// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1374/D

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
    ll ans = 0;
    map<ll, ll> count;
    ll temp = 0, num = 0;
    ll temp2;
    rep(i, n)
    {
        cin >> temp2;
        if (temp2 % k != 0)
        {
            temp = ceil(temp2 / (double)k) * k - temp2;
            count[temp]++;
        }
    }

    for (auto it : count)
    {
        if (it.second >= ans)
        {
            ans = it.second;
            num = it.first;
        }
    }

    ans = max(0 * 1ll, ans * k - (k - 1) + num);
    cout << ans << '\n';
}

int main()
{
    IOS;
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}