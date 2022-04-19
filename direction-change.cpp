// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1668/problem/0

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if ((n == 1 || m == 1) && abs(n - m) > 1)
    {
        cout << -1 << "\n";
        return;
    }
    ll end = min(n, m);
    ll ans = 0;
    ans += (end - 1) * 2;
    if (end != n || end != m)
    {
        ll x = end != m ? m : n;
        ans += (x - end) / 2 * 4 + (x - end) % 2;
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