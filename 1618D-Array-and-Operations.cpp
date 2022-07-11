// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1618/D

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    ll sum = 0;
    int arr[n];
    rep(i, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);

    int l = n - 2 * k, r = n - k;
    while (r<n)
    {
        sum += arr[l] / arr[r];
        sum -= arr[l] + arr[r];
        l++, r++;
    }
    cout << sum << '\n';
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
