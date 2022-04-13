// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/124/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n - a, b + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}