// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1285/C

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
    for (ll i = ceil(sqrt(n)); i > 0; i--)
    {
        if (n % i == 0)
        {
            if (__gcd(i, n / i) == 1)
            {
                cout << n / i << ' ' << i << '\n';
                break;
            }
        }
    }
}

int main()
{
    IOS;

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}