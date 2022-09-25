// Google Kickstart 2022 - Round F
// Author: simimakhijani
// https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb409/0000000000bef79e

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i <= n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;

    // build tree
    ll x, y;
    vector<vector<ll>> adj(n, vector<ll>());
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        x--, y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ll temp;
    for (ll i = 0; i < q; i++)
    {
        cin >> temp;
    }
    // total water = q;

    queue<ll> que;

    vector<bool> visited(n, false);

    que.push(0);
    ll ans = 0;
    visited[0] = true;
    while (!que.empty())
    {
        ll s = que.size();
        if (s <= q)
        {
            ans += s;
            q -= s;
        }
        else
        {
            break;
        }
        ll tempS = 0;
        for (ll i = 0; i < s; i++)
        {
            ll m = que.front();
            que.pop();
            // traverse
            for (ll j = 0; j < adj[m].size(); j++)
            {
                if (!visited[adj[m][j]])
                {
                    visited[adj[m][j]] = true;
                    que.push(adj[m][j]);
                }
            }
        }
    }

    cout << ans << '\n';
}

int main()
{
    IOS;

    int t;
    cin >> t;
    repn(i, 1, t)
    {
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}