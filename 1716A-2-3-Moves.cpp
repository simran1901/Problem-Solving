// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1716/problem/A

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
    ll n;
    cin >> n;
    ll ans = 0;
    if (n==1) ans = 2;
    else if (n % 3 == 0)
    {
        ans = n / 3;
    }
    else 
    {
        ans = ceil(n / 3.0);
    }

    if (n % 2 == 0)
        ans = min(n / 2, ans);

    cout << ans << '\n';
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