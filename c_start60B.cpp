// Codechef
// Author: simimakhijani
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

ll n, k;

void solve()
{
    cin>>n>>k;

    vl arr(n);
    ll amp = 0, temp2 = 0, temp3 = 1;
    ll ans = 0;
    inpArr(arr, 0, n);

    ll mx = *max_element(arr.begin(), arr.end());

    sort(arr.begin(), arr.end());
    vl temp(n+1);

    repn(i, 1, 2 * n + 1)
    {
        if (arr[amp] == i)
        {
            amp++;
            continue;
        }
        temp[temp2] = i;
        temp3 = max(temp3, i);
        temp2++;
    }

    if (k == 1)
    {
        rep(i, n)
        {
            if (mx >= temp[i])
            {
                ans = max(ans, abs(mx - temp[i]));
            }
        }
        cout << ans << nl;
        return;
    }
    if (mx != 2 * n)
    {
        k--;
    }
    amp = 0;
    temp3 = max(temp3, mx);

    while (k > 0)
    {
        ans += abs(temp[amp] - temp3);
        amp++;
        k--;
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