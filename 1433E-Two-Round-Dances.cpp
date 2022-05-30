// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1433/E

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

ll factorial(ll n)
{
    ll factorial = 1;
    for (ll i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void solve()
{
    ll n;
    cin >> n;
    ll ncr = 1;
    for (ll i = n; i > n / 2; i--)
    {
        ncr *= i;
    }
    for (ll i = 1; i <= n / 2; i++)
    {
        ncr /= i;
    }
    ll temp = factorial(n / 2 - 1);
    ll ans = (ncr * temp * temp) / 2;
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}