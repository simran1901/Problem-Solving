// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/617/B

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
    // get distance between two ones
    ll prev = -1;
    ll temp;
    ll ans = 1;
    rep(i, n)
    {
        cin >> temp;
        if (temp == 1)
        {
            if (prev == -1)
                prev = i;
            else
            {
                ans *= i - prev;
                prev = i;
            }
        }
    }
    if (prev == -1)
        ans = 0;
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}