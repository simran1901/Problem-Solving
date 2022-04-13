// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1476/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll num = k;
    if (n > k)
    {
        num = k * (n / k);
        if (n % k != 0)
            num += k;
    }
    ll ans = num / n;
    if (num % n != 0)
        ans++;
    cout << ans << "\n";
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