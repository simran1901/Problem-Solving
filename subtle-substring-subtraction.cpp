// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1673/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int len = s.length();
    int scoreA = 0;
    int scoreB = 0;
    int sum = 0;
    for (auto a : s)
    {
        scoreA += a - 'a' + 1;
    }
    if (len % 2)
    {
        scoreB = min(s[0] - 'a' + 1, s[len - 1] - 'a' + 1);
        scoreA -= scoreB;
    }
    if (scoreA > scoreB)
    {
        cout << "Alice " << scoreA - scoreB << "\n";
    }
    else
    {
        cout << "Bob " << scoreB - scoreA << "\n";
    }
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