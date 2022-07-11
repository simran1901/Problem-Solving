// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1526/B

#include <bits/stdc++.h>
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
    int n;
    cin >> n;

    rep(i, 20)
    {
        if (n % 11 == 0)
        {
            cy;
            return;
        }

        n -= 111;
        if (n < 0)
            break;
    }
    cn;
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