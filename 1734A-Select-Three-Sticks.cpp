// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1734/problem/A

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
    sort(arr.begin(), arr.end());
    ll mi = arr[2] - arr[0];
    ll mii = 0;
    for (ll i = 0; i + 2 < n; i++)
    {
        if (mi > arr[i + 2] - arr[i])
        {
            mi = arr[i + 2] - arr[i];
            mii = i;
        }
    }

    cout << mi << '\n';
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