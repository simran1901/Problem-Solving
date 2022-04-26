// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1373/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a < c && b > 1)
        cout << 1 << " ";
    else
        cout << -1 << " ";
    if (a * b > c)
        cout << b << "\n";
    else
        cout << -1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}