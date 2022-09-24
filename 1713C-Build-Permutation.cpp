// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1713/problem/C

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

vector<ll> perfectSquares(450);

void solve()
{
    ll n;
    cin >> n;
    vl ans(n);
    rep(i, n)
    {
        ans[i] = i;
    }

    ll ind = n - 1;
    while (ind > 0)
    {
        auto lb = lower_bound(perfectSquares.begin(), perfectSquares.end(), ind);

        if (*lb - ind <= ind)
            reverse(ans.begin() + (*lb - ind), ans.begin() + ind + 1);
        else
        {
            cout << -1 << '\n';
            return;
        }
        ind = *lb - ind - 1;
    }

    printArr(ans, 0, n);
    cout << '\n';
}

int main()
{
    IOS;

    for (ll i = 0; i < 450; i++)
    {
        perfectSquares[i] = i * i;
    }

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}