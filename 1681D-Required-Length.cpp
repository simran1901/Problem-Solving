// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1681/problem/D

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

ll res = INT_MAX;
unordered_map<ll, bool> mapp;
void dfs(unsigned ll x, ll t, ll n)
{
    // cout << s << "\n";
    string s = to_string(x);
    ll sl = s.length();
    if (sl == n)
    {
        res = min(t, res);
        return;
    }
    if (sl > n || t + n - sl >= res)
        return;
    for (auto a : s)
    {
        if ((a - '0') > 1)
        {
            dfs(x * (a - '0'), t + 1, n);
        }
    }
    // res = -1;
}

void solve()
{
    ll n;
    unsigned ll x;
    cin >> n >> x;
    dfs(x, 0, n);
    if (res == INT_MAX)
        res = -1;
    cout << res << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}