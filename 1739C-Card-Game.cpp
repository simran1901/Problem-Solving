// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1739/problem/C

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

using namespace std;

void solve()
{
    ll mod = 998244353;
    vl ncr(31);
    ncr[1] = 2;

    vector<pair<ll, ll>> arr(31);
    arr[1].first = 1;
    arr[1].second = 0;
    repn(i, 2, 31)
    {
        ll p = ncr[i - 1];
        ncr[i] = (2 * p + (((i - 1) * p) / i) + (((i - 1) * p) / i));
        arr[i].first = (p + ((i - 1) * p) / i + arr[i - 1].second) % mod;
        arr[i].second = (ncr[i] - arr[i].first - 1) % mod;
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll r = n / 2;
        cout << arr[r].first << ' ' << arr[r].second << ' ' << 1 << endl;
    }
}

int main()
{
    IOS;

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}