// Hackerearth
// Author: simranmakhijani55
// https://www.hackerearth.com/challenges/competitive/october-easy-22/algorithm/max-game-2a0793c2/description/

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
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define nl '\n'

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int num = log(n) / log(2);
    cout << pow(2, num) << nl;
}

int main()
{
    IOS;

    int t;
    cin >> t;
    while (t--)
        solve();
}