// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1674/problem/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    bool flag = false;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == 'a')
        {
            flag = true;
            break;
        }
    }
    // if t contains a and len is greater than 1
    if (flag && t.length() > 1)
    {
        cout << -1 << "\n";
    }
    else if (flag && t.length() == 1)
    {
        cout << 1 << "\n";
    }
    else
    {
        ll ans = 0;
        ans = pow(2, s.length());
        cout << ans << "\n";
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