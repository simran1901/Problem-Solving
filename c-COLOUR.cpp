// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/COLOUR

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
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll ans = 0;
    v arr(3);
    rep(i, 2)
    {
        cin >> arr[i];
        if (arr[i] >= 1)
        {
            arr[i]--;
            ans++;
        }
    }
    sort(arr.begin(), arr.end());
    if (arr[2] >= 1 && arr[1] >= 1)
    {
        arr[1]--; 
        arr[2]--;
        ans++;
    }
    if (arr[0] >= 1 && arr[2] >= 1)
    {
        arr[0]--;
        arr[2]--;
        ans++;
    }
    if (arr[0] >= 1 && arr[1] >= 1)
    {
        arr[0]--;
        arr[1]--;
        ans++;
    }

    cout << ans << endl;
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