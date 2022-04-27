// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1388/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    // no. of eights
    int count = 0;
    count = (n - 1) / 4;
    rep(i, n - count - 1) cout << 9;
    rep(i, count + 1) cout << 8;
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}