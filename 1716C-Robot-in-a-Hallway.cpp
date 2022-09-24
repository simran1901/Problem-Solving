// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1716/problem/C

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
const int N = 2e5 + 5;

int a[2][N], vec[2][N];

void solve()
{
    int n, ans;
    cin >> n;
    ans = 2e9;
    rep(i, 2) repn(j, 1, n + 1) cin >> a[i][j];
    a[0][1] = -1;
    vec[0][n] = max(a[0][n] + 2, a[1][n] + 1);
    vec[1][n] = max(a[1][n] + 2, a[0][n] + 1);
    for (int i = n - 1; i >= 1; i--)
    {
        vec[0][i] = max(vec[0][i + 1] + 1, max(a[1][i] + 1, a[0][i] + 2 * (n - i + 1)));
        vec[1][i] = max(vec[1][i + 1] + 1, max(a[0][i] + 1, a[1][i] + 2 * (n - i + 1)));
    }
    ans = min(ans, vec[0][1]);
    int now = -1;
    for (int i = 1; i <= n; i++)
    {
        int cur = (i - 1) & 1;
        now = max(now, a[cur][i]) + 1;
        now = max(now, a[cur ^ 1][i]) + 1;
        if (i != n)
            ans = min(ans, max(now + 2 * (n - i), vec[cur ^ 1][i + 1]));
    }
    ans = min(ans, now);
    cout << ans << '\n';
}

int main()
{
    IOS;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}