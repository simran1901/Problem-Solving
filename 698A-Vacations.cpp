// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/698/A

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
    int n;
    cin >> n;
    v a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vv dp(n, v(3));
    if (a[0] == 1 || a[0] == 3)
        dp[0][1]++;
    if (a[0] == 2 || a[0] == 3)
        dp[0][2]++;
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]);
        if (a[i] == 1 || a[i] == 3)
            dp[i][1]++;
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]);
        if (a[i] == 2 || a[i] == 3)
            dp[i][2]++;
    }
    cout << n - max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
