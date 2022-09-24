// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1717/problem/C

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

const int sz = 200001;
ll a[sz];
ll b[sz];

void solve()
{
    ll n;
    cin >> n;
    rep(i, n - 1) cin >> a[i];
    rep(i, n - 1) cin >> b[i];

    if (a[n - 1] > b[n - 1] || (b[n - 1] > b[0] + 1 && b[n - 1] > a[n - 1]))
    {
        cn;
        return;
    }
    per(i, n - 2)
    {
        if (a[i] > b[i] || (b[i] > b[i + 1] + 1 && b[i] > a[i]))
        {
            cn;
            return;
        }
    }
    cy;
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