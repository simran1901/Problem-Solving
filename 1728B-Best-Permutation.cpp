// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1728/problem/B

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
    ll n;
    cin >> n;
    vl a(n);

    a[n - 1] = n;

    if (n > 1)
    {
        a[n - 2] = n - 1;
        if (n % 2)
        {
            a[n - 2] = n - 2;
        }
    }

    if (n > 2)
    {
        if (n % 2 == 0)
        {
            rep(i, n - 3)
            {
                a[i] = n - 2 - (i);
            }
        }
        else
        {
            a[0] = n - 1;
            a[n - 3] = 1;

            repn(i, 1, n - 4)
            {
                a[i] = n - i - 2;
            }
        }
    }

    rep(i, n - 1)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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