// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1709/problem/B

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
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    inpArr(arr, 0, n);
    vector<ll> prefix(n, 0);
    repn(i, 1, n)
    {
        prefix[i] = prefix[i - 1] + max(0 * 1ll, arr[i - 1] - arr[i]);
    }

    vector<ll> suffix(n, 0);
    for (ll i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + max(0 * 1ll, arr[i + 1] - arr[i]);
    }
    while (m--)
    {
        ll a, b, ans = 0;
        cin >> a >> b;
        --a, --b;
        if (b >= a)
        {
            ans = prefix[b] - prefix[a];
        }
        else
        {
            ans = suffix[b] - suffix[a];
        }
        cout << ans << '\n';
    }
}

int main()
{
    IOS;

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}