// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1624/problem/C

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
#define nl '\n'

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vl arr(n);
    ll temp;
    rep(i, n)
    {
        cin >> arr[i];
        while (arr[i] > n)
        {
            arr[i] /= 2;
        }
    }

    vector<bool> count(n + 1, false);

    sort(arr.begin(), arr.end());
    rep(i, n)
    {
        while (count[arr[i]])
        {
            arr[i] /= 2;
        }
        if (arr[i] == 0)
        {
            cn;
            return;
        }
        count[arr[i]] = true;
    }
    cy;
    return;
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