// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1249/B2

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
    vector<int> p(n);
    for (int j = 0; j < n; ++j)
    {
        cin >> p[j];
        p[j]--;
    }
    vector<int> visited(n);
    vector<int> ans(n);
    rep(i, n)
    {
        if (!visited[i])
        {
            vector<int> cycle;
            while (!visited[i])
            {
                cycle.push_back(i);
                visited[i] = true;
                i = p[i];
            }
            for (auto el : cycle)
                ans[el] = cycle.size();
        }
    }
    rep(i, n)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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