// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1674/problem/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s[1] < s[0])
        cout << (s[0] - 'a') * 25 + s[1] - 'a' + 1 << "\n";
    else
        cout << (s[0] - 'a') * 25 + s[1] - 'a' << "\n";
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