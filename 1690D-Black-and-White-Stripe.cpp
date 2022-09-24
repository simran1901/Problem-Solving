// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1690/problem/D

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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll noOfWhites = 0;
    rep(i, k)
    {
        if (s[i] == 'W')
            noOfWhites++;
    }
    ll ans = noOfWhites;

    for (ll i = k; i < n; i++)
    {
        if (s[i - k] == 'W')
            noOfWhites--;
        if (s[i] == 'W')
            noOfWhites++;
        ans = min(noOfWhites, ans);
    }
    cout << ans << endl;
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
