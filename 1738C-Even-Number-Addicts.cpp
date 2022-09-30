// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1738/problem/C

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
    ll odd = 0, even = 0;
    ll temp = 0;
    rep(i, n)
    {
        cin >> temp;
        if (temp % 2 == 0)
            even++;
        else
            odd++;
    }
    ll total = ceil(n / 2.0);
    // even number of odds
    // odds available to Alice = ceil odd/2
    ll availableOdds = ceil(odd / 2.0);
    ll pickedOdds = min(availableOdds / 2 * 2, total / 2 * 2);
    total -= pickedOdds;
    if (pickedOdds > odd / 2)
    {
        even--;
    }
    ll pickedEven = min((ll)ceil(even / 2.0), total);
    total -= pickedEven;
    if (total == 0)
    {
        cout << "Alice";
    }
    else
    {
        cout << "Bob";
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