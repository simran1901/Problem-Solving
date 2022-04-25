// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1469/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int open = -1, closed = -1, len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
            open = i;
        else if (s[i] == ')')
            closed = i;
    }
    if (closed < open && (closed == 0 || open == len - 1))
    {
        cout << "NO\n";
    }
    else if (len % 2 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}