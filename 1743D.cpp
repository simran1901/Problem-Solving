// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1743/problem/D

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
    string p = "";
    ll temp = 1;
    bool flag = false;
    rep(i, n)
    {
        if (s[i] == '1' || flag)
        {
            flag = true;
            p += s[i];
        }
    }
    cout << p << nl;

    ll ps = p.length();

    if (ps == 0)
    {
        cout << 0 << nl;
        return;
    }
    s = p;
    n = ps;
    p = "";
    repn(i, 2, n + 1)
    {
        ll x = n - temp + 1;
        ll y = n - i + 1;
        repn(j, min(x, y), n + 1)
        {
            ll a, b;
            if (s[j - 1] == '0')
            {
                if (j >= x)
                {
                    a = s[j - x] == '1' ? 1 : 0;
                }
                else
                {
                    a = 0;
                }
                if (j >= y)
                {
                    b = s[j - y] == '1' ? 1 : 0;
                }
                else
                {
                    b = 0;
                }
                if (a < b)
                {
                    temp = i;
                }
                if (a != b)
                {
                    break;
                }
            }
        }
    }
    repn(i, 1, n + 1)
    {
        if ((i >= n - temp + 1 && s[i - n + temp - 1] == '1') | int(s[i - 1] - '0'))
            p += '1';
        else
        {
            p += '0';
        }
    }
    cout << p << nl;
}

int main()
{
    IOS;

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}