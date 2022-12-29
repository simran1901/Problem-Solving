// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1744/problem/D

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

ll n, temp;

ll twosPresentInNum(ll num)
{
    ll ans = 0;
    while (num % 2 == 0)
    {
        num /= 2;
        ans++;
    }
    return ans;
}

void solve()
{
    cin >> n;
    ll twoPresent = 0;
    vl a(n + 1);
    repn(i, 1, n + 1)
    {
        cin >> temp;
        twoPresent += twosPresentInNum(temp);
        a[i] = twosPresentInNum(i);
    }
    ll op = 0;
    if (twoPresent >= n)
    {
        cout << op << nl;
        return;
    }

    sort(a.begin(), a.end(), greater<ll>());
    rep(i, n)
    {
        if (twoPresent >= n)
            break;
        if (a[i] > 0)
            twoPresent += a[i];
        else
            break;
        op++;
    }
    if (twoPresent >= n)
        cout << op << nl;
    else
    {
        cout << -1 << nl;
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