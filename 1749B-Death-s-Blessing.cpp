// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1749/problem/B

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
#define pl pair<ll, ll>
#define vb vector<bool>
#define pb push_back
#define ppb pop_back

using namespace std;

const ll sz = 2*(1e5)+1;

ll n;
vl a(sz);
vl b(sz);
ll sum = 0, l, r;

void solve()
{
    cin >> n;
    sum = 0;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    inpArr(b, 0, n);
    l = 0, r = n - 1;
    while (l < r)
    {
        if (b[l] <= b[r])
        {
            sum += b[l];
            l++;
        }
        else
        {
            sum += b[r];
            r--;
        }
    }
    cout << sum << nl;
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