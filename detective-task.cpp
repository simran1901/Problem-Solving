// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1675/problem/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int one = -1;
    int zero = -1;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
            one = i;
        else if (s[i] == '0' && zero == -1)
            zero = i;
    }
    if (one == zero)
    {
        cout << len << "\n";
        return;
    }
    if (one == -1)
        one = 0;
    if (zero == -1)
    {
        zero = s.length() - 1;
    }
    cout << abs(one - zero) + 1 << "\n";
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