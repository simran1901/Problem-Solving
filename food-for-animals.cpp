// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1675/problem/0

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (x > a)
        x -= a;
    else if (x <= a)
        x = 0;
    if (y > b)
        y -= b;
    else if (y <= b)
        y = 0;
    if (x + y <= c)
        cout << "YES\n";
    else
        cout << "NO\n";
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