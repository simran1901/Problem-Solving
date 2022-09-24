// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1690/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 3 == 0)
    {
        cout << n / 3 << " " << n / 3 + 1 << " " << n / 3 - 1 << '\n';
    }
    else
    {
        ll rem = n % 3;
        ll a = n / 3, b = n / 3 + 1, c = n / 3 - 1;
        b++;
        if (rem == 2)
            a++;
        cout << a << ' ' << b << ' ' << c << '\n';
    }
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
