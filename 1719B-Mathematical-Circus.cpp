// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1719/problem/B

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
    ll n, k;
    cin >> n >> k;
    k = k % 4;
    if (k == 0)
    {
        cn;
        return;
    }

    cy;
    repn(i, 1, n)
    {
        if (i % 2)
        {
            if (k == 1 || k == 3)
            {
                cout << i << ' ' << i + 1 << '\n';
            }
            else
            {
                if ((i + 1) % 4 != 0)
                {
                    cout << i + 1 << ' ' << i << '\n';
                }
                else
                {
                    cout << i << ' ' << i + 1 << '\n';
                }
            }
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