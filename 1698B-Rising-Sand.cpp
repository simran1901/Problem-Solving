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
    ll n, k;
    cin >> n >> k;
    vl arr(n);
    inpArr(arr, 0, n);
    ll ans = 0;
    if (k == 1)
    {
        if (n % 2 == 0)
        {
            ans = n / 2 - 1;
        }
        else
        {
            ans = n / 2;
        }
    }
    else
    {
        // find tall
        repn(i, 1, n - 1)
        {
            if (arr[i] > (arr[i - 1] + arr[i + 1]))
            {
                ans++;
            }
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