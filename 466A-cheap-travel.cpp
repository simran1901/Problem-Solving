// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/466/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int cost = 0;
    if (m * a > b)
    {
        cost = n / m * b;
        cost += min(n % m * a, b);
    }
    else
    {
        cost = n * a;
    }
    cout << cost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}