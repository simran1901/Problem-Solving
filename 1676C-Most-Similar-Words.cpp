// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1676/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string arr[n];
    int ans = INT_MAX;
    rep(i, n) cin >> arr[i];
    for (int i = 0; i < n - 1; i++)
    {
        int sum;
        for (int j = i + 1; j < n; j++)
        {
            sum = 0;
            for (int k = 0; k < m; k++)
            {
                sum += abs(arr[i][k] - arr[j][k]);
            }
            // cout << sum << endl;
            ans = min(ans, sum);
        }
    }
    cout << ans << "\n";
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