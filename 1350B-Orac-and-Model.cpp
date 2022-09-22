// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1350/B

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

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    vector<int> dp(n + 1, 1);
    repn(i, 1, n + 1) cin >> arr[i];
    repn(i, 1, n + 1)
    {
        for (int j = 2 * i; j <= n; j += i)
        {
            if (arr[j] > arr[i])
                dp[j] = max(dp[j], dp[i] + 1);
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << '\n';
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