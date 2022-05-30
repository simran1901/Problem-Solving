// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1676/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        sum1 += s[i] - '0';
    }
    for (int i = 3; i < 6; i++)
        sum2 += s[i] - '0';
    if (sum1 == sum2)
        cout << "YES\n";
    else
        cout << "NO\n";
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