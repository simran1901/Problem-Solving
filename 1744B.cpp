// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1744/problem/B

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

ll n, q;
ll even, odd, sum;

void solve()
{
    cin >> n >> q;
    ll temp;
    even = 0, odd = 0, sum = 0;
    rep(i, n)
    {
        cin >> temp;
        if (temp % 2 == 0)
            even++;
        else
            odd++;
        sum += temp;
    }
    rep(i, q)
    {
        ll op;
        cin >> op;
        ll x;
        cin >> x;

        if (op == 0)
        {
            sum += x * even;
            if (x % 2 != 0)
            {
                // even become odd
                odd += even;
                even = 0;
            }
        }
        else
        {
            sum += x * odd;
            if (x % 2 != 0)
            {
                even += odd;
                odd = 0;
            }
        }
        cout << sum << nl;
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