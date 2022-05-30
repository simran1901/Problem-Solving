// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1676/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    ll minEl = INT_MAX;
    ll ans = 0;
    rep(i, n)
    {
        cin >> arr[i];
        minEl = min(minEl, arr[i]);
    }
    rep(i, n)
    {
        if (arr[i] > minEl)
        {
            ans += arr[i] - minEl;
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