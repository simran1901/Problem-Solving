// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1668/problem/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n >= m)
    {
        cout << "NO\n";
        return;
    }
    ll res = 1;
    sort(arr + 0, arr + n, greater<ll>());
    arr[0] += arr[0];
    for (ll i = 0; i < n - 1; i++)
    {
        res += arr[i] + 1;
    }

    if (res <= m)
        cout << "YES\n";
    else
        cout << "NO\n";
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