// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1721/problem/C

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define v vector<ll>
#define vv vector<v>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n], brr[n];
    rep(i, n) cin >> arr[i];
    rep(i, n) cin >> brr[i];

    ll ptr = 0;
    rep(i, n)
    {
        while (brr[ptr] < arr[i] && ptr < n)
            ptr++;
        cout << brr[ptr] - arr[i] << ' ';
    }
    cout << '\n';

    for (int i = 0, j = 0; i < n; i++)
    {
        j = max(j, i);
        while (j + 1 < n && arr[j + 1] <= brr[j])
        {
            j++;
        }
        cout << brr[j] - arr[i] << " ";
    }
    cout << '\n';
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