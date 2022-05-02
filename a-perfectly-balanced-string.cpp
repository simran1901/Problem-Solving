// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1673/problem/B

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

    set<char> characters;
    for (char ch : s)
    {
        characters.insert(ch);
    }

    int diffChars = characters.size();
    for (int i = 0; i + diffChars < len; i++)
    {
        if (s[i] != s[i + diffChars])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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