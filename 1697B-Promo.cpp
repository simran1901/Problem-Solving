// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1697/problem/B

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
    ll q;
    cin >> q;
    vector<ll> arr(n);
    inpArr(arr, 0, n);
    sort(arr.begin(), arr.end(), greater<ll>());
    repn(i, 1, n)
    {
        arr[i] = arr[i - 1] + arr[i];
    }
    // printArr(arr, 0, n);

    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        --x, --y;
        ll ans = arr[x];
        if (x-y-1>=0) ans -= arr[x - y - 1];
        cout << ans << '\n';
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