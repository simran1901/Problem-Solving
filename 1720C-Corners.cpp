// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1720/problem/C

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
    vector<vector<char>> grid(n, vector<char>(m));
    ll count1 = 0;
    rep(i, n - 1)
    {
        rep(j, m - 1)
        {
            cin >> grid[i][j];
            if (grid[i][j] == '1')
            {
                count1++;
            }
        }
    }

    ll count = 0;
    ll mx = 0;

    rep(i, n - 2)
    {
        rep(j, m - 2)
        {
            count = 0;
            repn(k, i, i + 1)
            {
                repn(l, j, j + 1)
                {
                    if (grid[k][l] == '0')
                    {
                        count++;
                    }
                }
            }
            mx = max(mx, count);
            if (count >= 2)
            {
                break;
            }
        }
    }

    if (mx == 0)
    {
        count1 -= 2;
    }
    else if (mx == 1)
    {
        count1 -= 1;
    }
    cout << count1 << '\n';
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