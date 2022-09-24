// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1714/problem/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int num = 0;
    int i = 9;
    int ind = 1;
    while (n > 0)
    {
        i = min(n, i);
        num = i * ind + num;
        n -= i;
        ind *= 10;
        i--;
    }
    cout << num << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}