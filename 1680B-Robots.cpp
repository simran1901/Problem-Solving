// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1680/problem/B

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
#define pl pair<ll, ll>
#define vb vector<bool>
#define pb push_back
#define ppb pop_back

using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll row = -1, col = -1;
    vector<string> arr(n);
    rep(i, n)
    {
        cin >> arr[i];
    }

    rep(i, n)
    {
        rep(j, m)
        {
            if (row == -1 && col == -1 && arr[i][j] == 'R')
            {
                row = i, col = j;
            }
            else if (arr[i][j] == 'R')
            {
                if (j < col)
                {
                    cn;
                    return;
                }
            }
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