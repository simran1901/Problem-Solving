// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/379/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = a;
    while (a >= b)
    {
        ans += (a / b);
        a = (a / b + a % b);
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
