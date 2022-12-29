// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1746/problem/B

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

ll n;
vl arr(1e5 + 1);

void solve()
{
    cin >> n;
    inpArr(arr, 0, n);
    ll r = n - 1;
    ll l = 0;
    ll ans = 0;
    while (l < r)
    {
        while (l < r && arr[l] != 1)
        {
            l++;
        }
        while (r > l && arr[r] != 0)
        {
            r--;
        }
        if (l < r && arr[l] == 1 && arr[r] == 0)
        {
            swap(arr[l], arr[r]);
            l++;
            r--;
            ans++;
        }
        else
            break;
    }
    cout << ans << nl;
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