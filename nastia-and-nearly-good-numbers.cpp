// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1521/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (b == 1)
        cout << "NO\n";
    else
        cout << "YES\n"
             << a * 1ll << " " << a * b * 1ll << " " << (a * b + a) * 1ll << "\n";
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