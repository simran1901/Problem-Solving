// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1360/D

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i <= k)
                ans = max(ans, i);
            if (n / i <= k)
                ans = max(ans, n / i);
        }
    }
    ans = n / ans;
    cout << ans << "\n";
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