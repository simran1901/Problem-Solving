// Codeforces
// Author: simranmakhijani55
//

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
    ll a[n];
    ll b[n];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    ll mx = 0;
    for (int j = 0; j < n; j++)
    {
        mx = max(mx, a[j] - b[j]);
    }
    for (int j = 0; j < n; j++)
    {
        if (b[j] != max(a[j] - mx, 0 * 1ll))
        {
            cn;
            return;
        }
    }
    cy;
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
