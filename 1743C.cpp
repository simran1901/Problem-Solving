// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1743/problem/C

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

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vl arr(n);
    inpArr(arr, 0, n);
    ll start = 0;
    ll ans = 0;
    // cout << s << nl;
    while (s[start] == '1')
    {
        // cout<<"fjrefj";
        ans += arr[start];
        start++;
    }
    // cout << start << nl;
    ll temp;
    for (ll i = start; i < n;)
    {
        // 0 aayega at i
        temp = i;
        ll mi = arr[i];
        ans += arr[i];
        i++;

        while (i < n && s[i] == '1')
        {
            mi = min(arr[i], mi);
            ans += arr[i];
            i++;
        }
        // cout << i << "viej" << nl;

        ans -= mi;
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