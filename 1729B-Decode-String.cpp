// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1729/problem/B

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
#define inpArr(arr, m, n) \
    repn(i, m, n)         \
            cin >>        \
        arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for (ll i = n - 1; i >= 0; i--)
    {
        if (i - 2 >= 0 && s[i] == '0')
        {
            // take two chars
            ans += ('a' + (stoi(s.substr(i - 2, 2)) - 1));
            i -= 2;
        }
        else
        {
            ans += ('a' + (stoi(s.substr(i, 1)) - 1));
        }
    }
    // cout << ans << endl;
    reverse(ans.begin(), ans.end());
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