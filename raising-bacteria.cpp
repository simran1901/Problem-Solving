// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/579/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    while (n >= 1)
    {
        if (n % 2)
            ans++;
        n /= 2;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}