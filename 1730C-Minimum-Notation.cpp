// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1730/problem/C

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
    string s;
    cin >> s;
    ll n = s.length();
    ll temp = s[n - 1];

    for (ll i = n - 2; i >= 0; i--)
    {
        if (temp < s[i])
        {
            if (s[i] < '9')
            {
                s[i] += 1;
            }
        }
        else
        {
            temp = s[i];
        }
    }

    sort(s.begin(), s.end());
    cout << s << '\n';
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