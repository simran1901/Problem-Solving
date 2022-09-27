// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1706/problem/C

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vl arr(n);
    inpArr(arr, 0, n);
    ll ans = 0;
    vl temp(n);
    if (n < 3)
    {
        cout << 0 << '\n';
        return;
    }
    repn(i, 1, n - 1) temp[i] = max(0 * 1ll, max(arr[i - 1], arr[i + 1]) - arr[i] + 1);
    if (n % 2 == 1)
    {
        for (ll i = 1; i < n - 1; i += 2)
        {
            ans += temp[i];
        }
    }
    else
    {
        ll sum = 0;
        for (ll i = 2; i < n - 1; i += 2)
        {
            sum += temp[i];
        }
        ans = sum;
        for (ll i = 1; i < n - 2; i += 2)
        {
            sum += temp[i] - temp[i + 1];
            ans = min(ans, sum);
        }
    }
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