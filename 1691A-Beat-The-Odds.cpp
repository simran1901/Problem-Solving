// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1691/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    // count odd, even and even odd pair
    ll temp, even = 0, odd = 0;
    rep(i, n)
    {
        cin >> temp;
        if (temp % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << min(even, odd) * 1ll << '\n';
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