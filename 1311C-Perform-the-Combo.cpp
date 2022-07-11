// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1311/C

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
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    ll arr[26];
    memset(arr, 0, sizeof(arr));
    ll p[m];
    rep(i, m) cin >> p[i];
    sort(p, p + m);
    ll in = 1;
    // if i or greater found increment i
    for (ll i = 0; i < m && in <= n;)
    {
        if (p[i] >= in)
        {
            arr[s[in - 1] - 'a'] += m - i;
            in++;
        }
        else
        {
            i++;
        }
    }
    rep(i, n) arr[s[i] - 'a']++;
    rep(i, 26) cout << arr[i] << ' ';
    cout << '\n';
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