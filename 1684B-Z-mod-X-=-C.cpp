// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1521/B

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
    ll a, b, c;
    cin >> a >> b >> c;
    ll z = c;
    ll y = z + b;
    ll x = a + y;
    cout << x << " " << y << ' ' << z << '\n';
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