// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1744/problem/C

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

ll n;
string s;
char ch;

void solve()
{
    cin >> n >> ch;
    cin >> s;
    ll mx = 0;
    ll count = 0;
    rep(i, n)
    {
        while (i < n && s[i] != ch)
        {
            i++;
        }
        count = 0;
        // jb tk g na mile
        if (i < n)
        {
            while (s[i % n] != 'g')
            {
                count++;
                i++;
            }
            mx = max(count, mx);
        }
    }
    cout << mx << nl;
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