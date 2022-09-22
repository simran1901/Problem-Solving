// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1463/B

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
    ll n;
    cin >> n;
    ll arr[n];
    ll s = 0;
    rep(i, n)
    {
        cin >> arr[i];
        s += arr[i];
    }
    ll curr[2] = {0, 0};
    rep(i, n)
        curr[i % 2] += arr[i] - 1;

    rep(j, 2)
    {
        if (2 * curr[j] > s)
            continue;
        rep(i, n)
        {
            if (i % 2 == j)
                arr[i] = 1;
        }
        break;
    }
    rep(i, n) cout << arr[i] << ' ';
    cout << '\n';
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