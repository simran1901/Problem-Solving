// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1716/problem/B

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define v vector<ll>
#define vv vector<v>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    repn(i, 1, n + 1) arr[i - 1] = i;
    cout << n << '\n';
    rep(i, n)
    {
        rep(j, n)
        {
            cout << arr[j] << ' ';
        }
        cout << '\n';

        // swap
        if (n - 1 - i > 0)
        {
            swap(arr[n - 1 - i], arr[n - 1 - i - 1]);
        }
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