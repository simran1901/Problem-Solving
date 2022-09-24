// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1722/problem/G

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

ll arr[200001];

void solve()
{
    ll n;
    cin >> n;
    repn(i, 1, n - 3)
    {
        cout << i << ' ';
    }
    cout << (1 << 29) << ' ' << (1 << 30) << ' ' << arr[n - 3]<<'\n';
}

int main()
{
    IOS;

    ll x = (1 << 29) ^ (1 << 30);

    rep(i, 200000)
    {
        x ^= i;
        arr[i] = x;
    }

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}