// Codeforces
// Author: simranmakhijani55
//

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "Yes\n";
#define cn cout << "No\n";

using namespace std;

void solve()
{
    ll a, b, n, m;
    cin >> a >> b >> n >> m;
    if (m <= min(a, b) && n + m <= a + b)
    {
        cy;
    }
    else
        cn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while ((t--))
        solve();

    return 0;
}