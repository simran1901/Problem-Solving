// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1353/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n / 2; ++i)
    {
        ans += i * 1ll * i;
    }
    cout << ans * 8 << endl;
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