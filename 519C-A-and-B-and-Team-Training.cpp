// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/519/C

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
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        int cur = i;
        int leftn = n - i;
        int leftm = m - 2 * i;

        if (leftm >= 0)
        {
            cur += min(leftm, leftn / 2);
            ans = max(ans, cur);
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}