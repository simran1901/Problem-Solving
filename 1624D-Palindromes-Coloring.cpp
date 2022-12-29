// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1624/problem/D

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

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll pairs = 0, singles = 0;
    vl count(26, 0);
    string s;
    cin >> s;
    rep(i, n)
    {
        count[s[i] - 'a']++;
    }

    rep(i, 26)
    {
        pairs += count[i] / 2;
        singles += count[i] % 2;
    }
    // cout << pairs << ' ' << singles << nl;

    ll ans = pairs / k * 2;
    singles += pairs % k * 2;
    if (singles>=k)
        ans++;
    cout << ans << nl;
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