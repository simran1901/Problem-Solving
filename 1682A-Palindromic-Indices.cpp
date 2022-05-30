// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1682/problem/A

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
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    int i = n / 2 + 1;
    if (n % 2)
    {
        // check on right if same
        ans += 1;
    }
    else
    {
        ans += 2;
    }

    while (i < n && s[i] == s[n / 2])
    {
        ans += 2;
        i++;
    }
    cout << ans << '\n';
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