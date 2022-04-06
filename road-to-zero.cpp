// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1342/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    if (2 * a <= b)
    {
        ans = a * (x + y);
    }
    else
    {
        ll mi = min(x, y);
        ans = mi * b;
        x -= mi;
        y -= mi;
        if (x)
            ans += a * x;
        else
            ans += a * y;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}