// Codeforces
// Author: simranmakhijani55
//

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

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vl a(n + 1);
    ll zero = 0;
    repn(i, 1, n + 1)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            ++zero;
            if (zero > 1)
            {
                --i;
                --n;
            }
        }
    }
    if (n > 10)
    {
        cn;
        return;
    }
    else
    {
        ll fl = 0;
        ll tot = 0;
        ll i, j, k, l;
        for (i = 1; i <= n; ++i)
        {
            for (j = i + 1; j <= n; ++j)
            {
                for (k = j + 1; k <= n; ++k)
                {
                    fl = 0;
                    for (l = 1; l <= n; ++l)
                    {
                        if (a[l] == a[i] + a[j] + a[k])
                        {
                            fl = 1;
                        }
                    }
                    if (fl == 0)
                        ++tot;
                }
            }
        }
        if (tot)
            cout << "NO\n";
        else
            cout << "YES\n";
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