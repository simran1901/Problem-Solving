// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/401/C

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
    ll n, m;
    cin >> n >> m;
    if (n > m + 1 || m > 2 * (n + 1))
        cout << -1 << '\n';
    else
    {
        string ans = "";
        if (n == m + 1)
        {
            ans += "0";
            n--;
        }
        ll i = 0;
        ll twos = max(0 * 1ll, m - n - 1);
        while (n > 0 || m > 0)
        {
            if (i % 2 == 0)
            {
                if (twos > 0)
                {
                    ans += "11";
                    m -= 2;
                    twos--;
                }
                else
                {
                    ans += "1";
                    m--;
                }
            }
            else
            {
                ans += "0";
                n--;
            }
            i++;
        }
        cout << ans << '\n';
    }
}

int main()
{
    IOS;

    solve();

    return 0;
}