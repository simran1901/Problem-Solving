// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1738/problem/A

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
    vl arr(n);
    ll one = 0, zero = 0;
    rep(i, n)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            one++;
        else
            zero++;
    }
    vl power1(one);
    vl power0(zero);
    ll temp, ptr1 = 0, ptr0 = 0;
    ll sum = 0;
    rep(i, n)
    {
        cin >> temp;
        sum += temp;
        if (arr[i] == 1)
        {
            power1[ptr1++] = temp;
        }
        else
        {
            power0[ptr0++] = temp;
        }
    }

    sort(power1.begin(), power1.end(), greater<ll>());
    sort(power0.begin(), power0.end(), greater<ll>());

    ll ans = 0;
    if (one == zero)
    {
        // subtract lowest
        ans = 2 * sum - min(power0[zero - 1], power1[one - 1]);
    }
    else
    {
        ll mi = min(one, zero);
        rep(i, mi)
        {
            sum += power0[i];
            sum += power1[i];
        }
        ans = sum;
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