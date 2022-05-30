// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1476/B

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
    int n, k;
    cin >> n >> k;
    ll arr[n];
    rep(i, n) cin >> arr[i];
    ll ans = 0;
    repn(i, 1, n)
    {
        if (((double)arr[i] / arr[i - 1]) > (k / 100.0))
        {
            ll y = ceil((arr[i] * 100.0) / k - arr[i - 1]);
            // cout << y << endl;
            ans += y;
            arr[i - 1] += y;
        }
        arr[i] += arr[i - 1];
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