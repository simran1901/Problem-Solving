// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1624/problem/B

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
    ll a, b, c;
    cin >> a >> b >> c;

    // applying on a
    if ((b - c + b) % a == 0 && (b - c + b) / a > 0)
    {
        cy;
        return;
    }

    if ((c - a) % 2 == 0 && (a + (c - a) / 2) % b == 0 && (a + (c - a) / 2) / b > 0)
    {
        cy;
        return;
    }

    if ((b + b - a) % c == 0 && (b + b - a) / c > 0)
    {
        cy;
        return;
    }
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