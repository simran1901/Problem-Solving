// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1692/problem/G

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

bool isPal(string s)
{
    if (s[0] == s[4] && s[1] == s[3])
        return true;
    return false;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    v arr(n);
    rep(i, n)
    {
        cin >> arr[i];
    }

    ll count = 0;

    for (ll i = 1; i < n; i++)
    {
        if (arr[i] * 2 > arr[i - 1])
            count++;
        else
            count = 0;
        if (count >= k)
            ans++;
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
