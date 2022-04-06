// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/476/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n < m) {
        cout << -1;
    } else {
        cout << (n + (2 * m) - 1) / 2 / m * m;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}