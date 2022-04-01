// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1660/problem/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    if (arr.size() == 1)
    {
        if (arr[0] > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    else
    {
        if (arr[n - 1] - arr[n - 2] > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
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