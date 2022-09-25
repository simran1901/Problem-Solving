// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1711/problem/B

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
    ll n, m;
    cin >> n >> m;
    ll temp;
    vector<ll> arr(n);
    inpArr(arr, 0, n);
    vector<ll> count(n, 0);
    vl a(m), b(m);

    rep(i, m)
    {
        cin >> a[i];
        count[--a[i]]++;
        cin >> b[i];
        count[--b[i]]++;
    }

    if (m % 2 == 0)
    {
        cout << 0 << '\n';
        return;
    }

    ll ans = INT_MAX;
    rep(i, n)
    {
        if ((m - count[i]) % 2 == 0)
            ans = min(ans, arr[i]);
    }
    rep(i, m)
    {
        if ((m - count[a[i]] - count[b[i]] + 1) % 2 == 0)
            ans = min(ans, arr[a[i]] + arr[b[i]]);
    }
    cout << ans << '\n';
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