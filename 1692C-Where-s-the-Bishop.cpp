// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1692/problem/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

char grid[8][8];

void solve()
{
    int n = 8;
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> grid[i][j];
        }
    }

    repn(i, 1, n - 1)
    {
        repn(j, 1, n - 1)
        {
            if (grid[i][j] == '#')
            {
                if (grid[i - 1][j - 1] == '#' && grid[i - 1][j + 1] == '#' && grid[i + 1][j - 1] == '#' && grid[i + 1][j + 1] == '#')
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    break;
                }
            }
        }
    }
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
