// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1738/problem/B

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
    ll n, k;
    cin >> n >> k;
    vl arr(k);
    inpArr(arr, 0, k);

    if (k > 1)
    {
        ll d = arr[k - 1] - arr[k - 2];
        for (ll i = k - 2; i > 0; i--)
        {
            if (arr[i] - arr[i - 1] > d)
            {
                cn;
                return;
            }
            d = arr[i] - arr[i - 1];
        }
    }

    if (k > 1 && ceil((double)arr[0] / (n - k + 1)) > (arr[1] - arr[0]))
    {
        cn;
    }
    else
    {
        cy;
    }
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