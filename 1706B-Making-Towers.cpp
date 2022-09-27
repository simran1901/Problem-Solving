// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1706/problem/B

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
    vl mx(n + 1, 0);
    vl prev(n + 1, -1);
    vl arr(n);
    inpArr(arr, 0, n);
    rep(i, n)
    {
        if (prev[arr[i]] == -1)
        {
            prev[arr[i]] = i;
            mx[arr[i]]++;
        }
        else
        {
            if ((i - prev[arr[i]]) % 2 != 0)
            {
                mx[arr[i]]++;
            }
            prev[arr[i]] = i;
        }
    }
    printArr(mx, 1, n + 1);
    cout << endl;
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