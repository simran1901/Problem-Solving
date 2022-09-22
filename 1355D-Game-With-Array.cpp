// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1355/D

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
    ll n, s;
    cin >> n >> s;
    if (s >= 2 * n)
    {
        cy;
        ll rem = s % n;
        ll q = s / n;
        rep(i, rem) cout << q + 1 << ' ';
        rep(i, n - rem) cout << q << ' ';
        cout << '\n'<<s-1<<'\n';
    }
    else
        cn;
}

int main()
{
    IOS;

    solve();

    return 0;
}