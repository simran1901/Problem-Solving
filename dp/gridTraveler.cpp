// DP practice - youtube
// Grid traveler
// allowed moves - right and down

#include <bits/stdc++.h>
#define IOS                     \
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

vector<vector<int>> dp;

int solve(int n, int m)
{
  // if (n == 0 && m == 0)
  //   return 1;

  if (n < 0 || m < 0)
  {
    return 0;
  }
  if (dp[n][m] != -1)
    return dp[n][m];
  return dp[m][n] = dp[n][m] = solve(n - 1, m) + solve(n, m - 1);
}

int main()
{
  IOS;

  int n, m;
  cin >> n >> m;
  int x = max(n, m);
  dp.assign(x, vector<int>(x, -1));
  dp[0][0] = 1;
  cout << solve(n - 1, m - 1) << '\n';

  return 0;
}