// Codeforces
// Author: simranmakhijani55
//

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
    vl a(n);
    inpArr(a, 0, n);
    vl b(n);
    inpArr(b, 0, n);
    // count ones
    ll ao = 0;
    ll bo = 0;
    ll temp = 0;
    rep(i, n)
    {
        if (a[i] == 1)
        {
            ao++;
        }
        if (b[i] == 1)
        {
            bo++;
        }
        if (a[i] != b[i])
        {
            temp++;
        }
    }
    ll diff = abs(ao - bo);
    ll ans = diff;
    if (temp != diff)
    {
        ans++;
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