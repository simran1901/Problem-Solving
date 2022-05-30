// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1360/E

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<int>>
#define v vector<int>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

bool helper(vv &matrix, int r, int c, vv &dp, int n)
{
    if (c >= n || r >= n)
        return 1;
    if (dp[r][c] != -1)
        return dp[r][c];

    if (matrix[r][c] == 0)
        return dp[r][c] = 0;
    // check for below and right one
    return dp[r][c] = helper(matrix, r + 1, c, dp, n) || helper(matrix, r, c + 1, dp, n);
}

void solve()
{
    int n;
    cin >> n;
    vv matrix(n, v(n));
    vv dp(n, v(n, -1));
    char ch;
    rep(i, n) rep(j, n)
    {
        cin >> ch;
        matrix[i][j] = ch - '0';
    }
    // rep(i, n) rep(j, n) cout << matrix[i][j];
    bool ans = 1;
    rep(i, n) rep(j, n)
    {
        if (matrix[i][j] == 1)
            ans &= helper(matrix, i, j, dp, n);
    }
    if (ans)
        cy
    else
        cn
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