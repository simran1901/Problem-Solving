// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1182/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 2)
        cout << 0;
    else
        cout << (1l << (n / 2));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}