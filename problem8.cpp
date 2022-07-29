// Codeforces
// Author: simranmakhijani55
//

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

bool isBipartite(vv &adj, ll k,
                 vector<bool> &visited, vector<int> &color)
{
    if (adj[k].size() > 2)
        return false;
    for (int u : adj[k])
    {
        if (visited[u] == false)
        {
            visited[u] = true;

            color[u] = !color[k];

            if (!isBipartite(adj, u, visited, color))
                return false;
        }

        else if (color[u] == color[k])
            return false;
    }
    return true;
}
void solve()
{
    ll n;
    cin >> n;
    ll a, b;
    vv adj(n + 1);
    vector<bool> visited(n + 1);
    vector<int> color(n + 1, 0);
    rep(i, n)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    repn(i, 1, n + 1) if (!visited[i] && !isBipartite(adj, i, visited, color))
    {
        cn;
        return;
    }
    cy;
}

int main()
{
    IOS;
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}