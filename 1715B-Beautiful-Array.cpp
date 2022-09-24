// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1715/problem/B

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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    ll first = 0;
    if (s >= k * b + k - 1)
    {
        first = k * b + k - 1;
    }
    else if (s >= k * b)
    {
        first = s;
    }
    else
    {
        cout << -1 << '\n';
        return;
    }

    if ((k - 1) * (n - 1) < s - first)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << first << ' ';
        s = s - first;
        n--;
        while (s >= k - 1 && n > 0)
        {
            cout << k - 1 << ' ';
            s -= k - 1;
            n--;
        }
        if (s > 0 && n > 0)
        {
            cout << s << " ";
            n--;
        }
        while (n > 0)
        {
            cout << 0 << ' ';
            n--;
        }
        cout << endl;
    }
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