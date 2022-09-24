// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1690/problem/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    ll b[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    ll ans[n];
    ll temp;
    rep(i, n)
    {
        if (i == 0)
        {
            temp = b[i] - a[i];
        }
        else
        {
            if (a[i] < b[i - 1])
            {
                temp = b[i] - b[i - 1];
            }
            else
                temp = b[i] - a[i];
        }
        cout << temp << ' ';
    }
    cout << endl;
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
