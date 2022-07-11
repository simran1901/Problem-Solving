// Codeforces
// Author: simranmakhijani55
//

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define v vector<ll>
#define vv vector<v>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<int>> matrix({{1, 0, 0, 1}, {0, 1, 1, 0}, {0, 1, 1, 0}, {1, 0, 0, 1}});

    rep(i, n)
    {
        rep(j, m)
        {
            cout << matrix[i % 4][j % 4] << " ";
        }
        cout << "\n";
    }
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