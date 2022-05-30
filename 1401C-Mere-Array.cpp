// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1401/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

ll a[100000], b[100000];

void solve()
{
    ll n;
    cin >> n;
    ll m = 10e9;
    rep(i, n)
    {
        cin >> a[i];
        b[i] = a[i];
        m = min(m, a[i]);
    }
    sort(b, b + n);

    rep(i, n)
    {
        if (a[i] != b[i] && a[i] % m != 0)
        {
            cn return;
        }
    }
    cy
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