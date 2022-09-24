// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1729/problem/D

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i <= n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) \
    repn(i, m, n)         \
            cin >>        \
        arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vl x(n);
    ll temp;
    inpArr(x, 0, n - 1);
    rep(i, n - 1)
    {
        cin >> temp;
        x[i] = temp - x[i];
    }

    sort(x.begin(), x.end());
    ll ptr1 = 0;
    ll ptr2 = n - 1;
    ll ans = 0;

    while (ptr1 < ptr2)
    {
        if (x[ptr1] + x[ptr2] >= 0)
        {
            ptr1++, ptr2--;
            ans++;
        }
        else
        {
            ptr1++;
        }
    }
    cout << ans << '\n';
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