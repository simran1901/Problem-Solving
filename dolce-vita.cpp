// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1671/problem/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll sum = 0;
    sort(arr, arr + n);
    for (ll i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }

    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        if (arr[i] > x)
            break;
        ans += (x - arr[i]) / (i + 1) + 1;
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
    {
        solve();
    }

    return 0;
}