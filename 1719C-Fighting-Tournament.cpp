// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1719/problem/C

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

void solve()
{
    int n, q, x = 1;
    map<int, int> m;
    cin >> n >> q;
    int vec[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> vec[i];
    for (int i = 2; i <= n; i++)
    {
        if (vec[i] > vec[x])
            x = i;
        m[x]++;
    }
    m[x] = INT_MAX;
    for (int i = 0; i < q; i++)
    {
        int a, k;
        cin >> a >> k;
        k -= max(a - 2, 0);
        cout << max(min(m[a], k), 0) << endl;
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