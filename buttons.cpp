// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/268/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += i * (n - i) + 1;
    }
    cout << count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}