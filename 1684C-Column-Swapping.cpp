// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1684/problem/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vv grid(n, v(m));
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> grid[i][j];
        }
    }

    v bad;
    for (int i = 0; i < n && bad.empty(); i++)
    {
        v b(grid[i]);
        sort(b.begin(), b.end());
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] != b[j])
                bad.push_back(j);
        }
    }
    if ((int)bad.size() == 0)
    {
        cout << 1 << " " << 1 << "\n";
        return;
    }
    if ((int)bad.size() > 2)
    {
        cout << -1 << "\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        swap(grid[i][bad[0]], grid[i][bad[1]]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (grid[i][j] < grid[i][j - 1])
            {
                cout << -1 << "\n";
                return;
            }
        }
    }
    cout << bad[0] + 1 << " " << bad[1] + 1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}