// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1749/problem/A

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
    v rows(n), cols(n);
    vector<pair<int, int>> pairs(m);
    rep(i, m)
    {
        int x, y;
        cin >> x >> y;
        rows[x - 1] = -1;
        cols[y - 1] = -1;
        // grid[x-1][y-1] = -1;
        pairs[i] = {x - 1, y - 1};
    }

    rep(i, m)
    {
        // agr saare adjacent -1 nai ho tp move kr skta hai
        int x = pairs[i].first, y = pairs[i].second;
        // top - row -1 ? bottom row -1 ? left col -1 ? right col -1 ?
        if ((x > 0 && rows[x - 1] != -1) || (x < n - 1 && rows[x + 1] != -1) || (y > 0 && cols[y - 1] != -1) || (y < n - 1 && cols[y + 1] != -1))
        {
            cy;
            return;
        }
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