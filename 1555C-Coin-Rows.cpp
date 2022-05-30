// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1555/C

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
    int n = 2, m;
    cin >> m;
    int arr[n][m];
    int sum1 = 0, sum2 = 0;
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> arr[i][j];
            if (i == 0)
                sum1 += arr[i][j];
        }
    }
    int ans = INT_MAX;

    rep(i, m)
    {
        sum1 -= arr[0][i];
        ans = min(ans, max(sum1, sum2));
        sum2 += arr[1][i];
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