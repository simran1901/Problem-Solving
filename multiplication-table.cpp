// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/577/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll end = min(x / 2, n);

    ll count = 0;

    for (ll i = 1; i <= n; i++)
        if (x % i == 0 && x / i <= n)
            ++count;
    cout << count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}