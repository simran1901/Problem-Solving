// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1520/E

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
    string s;
    cin >> s;
    ll ans = 0;

    ll count = 0;
    rep(i, n)
    {
        count += s[i] == '*' ? 1 : 0;
    }
    ll cow = -1, index = 0;
    rep(i, n)
    {
        if (s[i] == '*')
        {
            cow++;
            if (cow == count / 2)
            {
                index = i;
                break;
            }
        }
    }

    cow = index - count / 2;
    rep(i, n)
    {
        if (s[i] == '*')
        {
            ans += abs(cow - i);
            cow++;
        }
    }
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