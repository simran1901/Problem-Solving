// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1726/problem/B

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

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (m < n || (n % 2 == 0 && m % 2 != 0))
    {
        cn;
    }
    else
    {
        cy;
        ll temp;
        if (n % 2 != 0)
        {
            temp = m - n + 1;
            rep(i, n - 2) cout << 1 << ' ';
            cout << temp << '\n';
        }
        else
        {
            temp = (m - n + 2) / 2;
            rep(i, n - 3) cout << 1 << ' ';
            rep(i, 1) cout << temp << ' ';
            cout << '\n';
        }
    }
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