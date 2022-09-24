// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1717/problem/B

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
#define inpArr(arr, n) \
    rep(i, n)          \
            cin >>     \
        arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

const int sz = 501;

char arr[sz][sz];
void solve()
{
    ll n, k, r, c;
    cin >> n >> k >> r >> c;
    rep(i, n - 1) rep(j, n - 1) arr[i][j] = '.';

    r--;
    c--;
    ll start = c;
    start = c - c / k * k;
    ll start1 = start;

    repn(i, r, n - 1)
    {
        for (ll j = start1; j < n; j += k)
        {
            arr[i][j] = 'X';
        }
        start1--;
        if (start1 < 0)
            start1 += k;
    }

    start += 1;
    if (start > k - 1)
        start -= k;

    pern(i, r - 1, 0)
    {
        for (ll j = start; j < n; j += k)
        {
            arr[i][j] = 'X';
        }
        start++;
        if (start > k - 1)
            start -= k;
    }

    rep(i, n - 1)
    {
        rep(j, n - 1)
        {
            cout << arr[i][j];
        }
        cout << '\n';
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