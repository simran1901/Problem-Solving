// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1674/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    if (y % x != 0)
        cout << "0 0\n";
    else
    {
        cout << 1 << " " << y / x << "\n";
    }
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