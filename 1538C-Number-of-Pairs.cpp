// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1538/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

ll binarySearch(ll arr[], ll l, ll r, ll x, ll n)
{
    if (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (mid == n - 1 && arr[mid] <= x)
            return mid;
        if (arr[mid - 1] <= x && arr[mid] > x)
            return mid - 1;
        if (arr[mid] <= x)
            return binarySearch(arr, mid + 1, r, x, n);
        return binarySearch(arr, l, mid - 1, x, n);
    }
    return -1;
}

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    ll arr[n];
    rep(i, n) cin >> arr[i];
    sort(arr, arr + n);
    if (arr[0] >= r)
    {
        cout << 0 << "\n";
        return;
    }
    // look for pairs with sum <= r
    // if ai+aj <= r
    // aj <= r-ai
    // look for pairs with sum <= l-1
    ll totalPairs = 0;
    ll pairs = 0;

    for (ll i = 0; i < n - 1; i++)
    {
        pairs = binarySearch(arr, i + 1, n - 1, r - arr[i], n);

        if (pairs == -1)
        {
            pairs = 0;
        }
        else
        {
            pairs = pairs - i;
        }
        totalPairs += pairs;
    }
    for (ll i = 0; i < n - 1; i++)
    {
        pairs = binarySearch(arr, i + 1, n - 1, l - 1 - arr[i], n);
        if (pairs == -1)
        {
            pairs = 0;
        }
        else
        {
            pairs = pairs - i;
        }
        totalPairs -= pairs;
    }
    cout << totalPairs << '\n';
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