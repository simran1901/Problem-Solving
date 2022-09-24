// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1712/problem/C

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
#define N 1000005

using namespace std;

int T, n, ans, i, j, k, a[N], c[N], pos[N], gg, tot;
void solve()
{

    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        c[i] = 0;
        pos[i] = 0;
    }
    for (i = 1; i <= n; ++i)
    {
        cin >> a[i], pos[a[i]] = max(i, pos[a[i]]);
    }
    a[0] = 1e9;
    for (i = n; ~i; --i)
        if (a[i] < a[i - 1])
        {
            gg = i - 1;
            break;
        }
    if (gg == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        tot = 0;
        for (i = 1; i <= n; ++i)
        {
            if (!c[a[i]])
                ++tot, c[a[i]] = 1, gg = max(gg, pos[a[i]]);
            if (i >= gg)
            {
                cout << tot << "\n";
                break;
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