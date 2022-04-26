// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1141/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (m % n)
        cout << -1 << "\n";
    else
    {
        ll d = m / n;
        ll ans = 0;
        while (d % 2 == 0)
        {
            d /= 2;
            ans++;
        }
        while (d % 3 == 0)
        {
            d /= 3;
            ans++;
        }
        if (d != 1)
            ans = -1;
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}