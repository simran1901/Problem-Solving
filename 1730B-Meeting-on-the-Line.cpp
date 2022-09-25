// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1730/problem/B

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
    ll n;
    cin >> n;

    vl arr(n), trr(n);
    inpArr(arr, 0, n);
    inpArr(trr, 0, n);

    vl brr(2 * n);
    ll ptr = 0;
    for (int i = 0; i < n; i++)
    {
        brr[ptr++] = arr[i] + trr[i];
        brr[ptr++] = arr[i] - trr[i];
    }

    ll mi = brr[0], ma = brr[0];
    rep(i, 2 * n)
    {
        mi = min(mi, brr[i]);
        ma = max(ma, brr[i]);
    }

    ll ans = mi + ma;
    cout << ans / 2;
    if (ans % 2)
        cout << ".5";
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