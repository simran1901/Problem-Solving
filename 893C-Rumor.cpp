// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/893/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

ll minEl = 10e10;

void dfsUtil(ll node, vv &adj, bool visited[], ll cost[])
{
    visited[node] = true;

    minEl = min(minEl, cost[node]);

    for (ll i = 0; i < adj[node].size(); i++)
    {
        if (!visited[adj[node][i]])
        {
            dfsUtil(adj[node][i], adj, visited, cost);
        }
    }
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll cost[n];
    rep(i, n) cin >> cost[i];

    vv adj(n, v());
    bool visited[n];
    memset(visited, false, sizeof(visited));
    // build graph
    ll a, b, ans = 0;
    rep(i, m)
    {
        cin >> a >> b;
        adj[a - 1].push_back(b - 1);
        adj[b - 1].push_back(a - 1);
    }

    for (ll i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            minEl = 10e10;
            dfsUtil(i, adj, visited, cost);
            ans += minEl;
        }
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while(t--)
    solve();

    return 0;
}