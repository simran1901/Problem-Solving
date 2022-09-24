// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1722/problem/E

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

ll n, q;
ll recs[1001][1001];

void solve()
{
    cin >> n >> q;
    rep(i, 1000) rep(j, 1000) recs[i][j] = 0;
    ll h, w, hs, hb, ws, wb;
    repn(i, 1, n)
    {
        cin >> h >> w;
        recs[h][w] += h * w;
    }

    repn(i, 1, 1000)
    {
        repn(j, 1, 1000)
        {
            recs[i][j] += recs[i][j - 1] + recs[i - 1][j] - recs[i - 1][j - 1];
        }
    }

    while (q--)
    {
        cin >> hs >> ws >> hb >> wb;
        hs++, ws++, hb--, wb--;
        ll ans = recs[hb][wb] - recs[hs - 1][wb] - recs[hb][ws - 1] + recs[hs - 1][ws - 1];
        cout << ans << '\n';
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