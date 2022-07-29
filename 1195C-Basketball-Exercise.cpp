// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1195/C

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define v vector<ll>
#define vv vector<v>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    // there will be three possibilities
    // when height is chosen from first row, from second row and not chosen from any
    ll n;
    cin >> n;
    vector<vector<ll>> inp(2, vector<ll>(n));
    rep(i, 2)
    {
        rep(j, n)
        {
            int num;
            cin >> num;
            inp[i][j] = num;
        }
    }

    pair<ll, ll> d = {0, 0};

    for (int i = 0; i < n; ++i)
    {
        pair<ll, ll> next = {max(d.first, d.second + inp[0][i]), max(d.second, d.first + inp[1][i])};
        d = next;
    }

    cout << max(d.first, d.second) << "\n";
}

int main()
{
    IOS;
    cin.tie(NULL);

    solve();

    return 0;
}