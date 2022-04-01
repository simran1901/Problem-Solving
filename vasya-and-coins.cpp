// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1660/problem/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == 0)
        cout << 1 << "\n";
    else
        cout << 2 * b + a + 1 << "\n";
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